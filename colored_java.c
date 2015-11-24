#include<stdio.h>

int main(int argv,char ** argc){
  char *keywords[7]= {"public","class","static","if","else","void","new"};
  // FILE *fp =
  for(int i =0;i< 7;i++){
    printf("%s",keywords[i]);
  }
  //read input java file
  //search for keywords in java file,
  //if keyword found,get position and length of the keyword and use fseek
  // to write to the file with<b>at both end then continue looping until we
  //find end of file
  return 0;
}
