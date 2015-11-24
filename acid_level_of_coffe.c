#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv){
  int coffee_ph_level[12];
  int distance_from_average[12];
  int average;
  int lower_point;//way lower from average
  int higer_point;//way higher from average
  int sum = 0;
  for(int i = 0;i < argc;i++){
    sum +=argv[i];
  }
  average = sum/argc;
  for(int j=0;j<argc;j++){
    int temp;
    temp = argv[i] - average;
    distance_from_average[j] = abs(temp);
  }
  int max_from_average,min_from_average,final_distance;
  length_of_array = sizeof(distance_from_average)/sizeof(int);
  max_from_average = max(&distance_from_average,length_of_array);
  min_from_average = min(&distance_from_average,length_of_array);
  if(abs(max_from_average - average) > abs(min_from_average - average)){
    final_distance = max_from_average;
  }
  else{
    final_distance = min_from_average;
  }
  for(int i=0;i< argc;i++){
    printf("data[%d] = %d",i,argv[i])
  }
  printf("average: %f",average);
  printf("most distant value:%f ",);
  printf("new average %f",);
  return 0;

}
//***************************************************
function max(*arr,length_of_array){
  int index = 0;
  int max = arr[0];
  for(k = 1;k < length_of_array;k++){
    if (arr[k] > max){
      max = arr[k];
      index = k;
    }
  }

  return max;
}


struct max{
  int max;
  int index;
}


struct max maximum(*arr,length_of_array){

    int index = 0;
    int max = arr[0];
    for(k = 1;k < length_of_array;k++){
      if (arr[k] > max){
        max.max = arr[k];
        max.index = k;

    }

    return max;
  }
}

function min(*arr,length_of_array){
  int min = arr[0];
  for(k = 1;k < length_of_array;k++){
    if (arr[k] < min){
      min = arr[k];
    }
  }
  return min;
}
