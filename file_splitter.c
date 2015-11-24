#include<stdio.h>

int main(int argc,char *argv[]){
  char *filename = argv[1];
  char *base_name = argv[2];
  int chunk_size = 4;
  FILE *fp = fopen("to_split.txt","r+");
  fseek(fp,0,SEEK_END);
  int length_of_file = ftell(fp);

  int size_of_each = length_of_file/chunk_size;
  // printf("%d\n",length_of_file);
  // printf("%d",size_of_each);

  for(int i=0;i < chunk_size;i++){
    char buffer[5];
    sprintf(buffer,"%d",i);

    FILE *smaller_files = fopen(base_name + buffer);
    fseek(smaller_files,size_of_each,SEEK_CUR);
    printf(ftell(smaller_files));
  }
  return 0;
}
