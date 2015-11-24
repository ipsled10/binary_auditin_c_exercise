#include<stdio.h>
#include<stdlib.h>
int main(void){
char buff[];
FILE *fp = fopen("to_split.txt","r+");
if(fp == NULL){
  fprintf(stderr,"can't open input file \n");
  exit(1);
}
else{
  fgets(buff,,fp)
}
return 0;
}
