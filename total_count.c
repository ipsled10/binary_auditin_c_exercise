#include<stdio.h>
#include<stdlib.h>
int main(int argc,char ** argv){
  printf("enter high");
  int high_value;
  puts("enter high value");
  scanf("%d",&high_value);
  int per_line;
  puts("enter per_line");
  scanf("%d",&per_line);
  int how_many_integer;
  puts("enter high how_many_integer");
  scanf("%d",&how_many_integer);
  char *filename;
  puts("filename");
  scanf("%s",filename);

  printf("%d",high_value);
  printf("%s",filename);
  return 0;
}
