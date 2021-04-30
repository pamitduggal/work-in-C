#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maxarray (int array[], int maxval, int size);

int main(int argc, char *argv[]){
  int maxval, size;
  size =10;
  time_t t;
  printf("Enter max value :\t");
  scanf("%d",&maxval);

  int array[size] ;
  for (size_t i = 0; i < size; i++) {
    array[i]=i+1;
  }
  maxarray(array,maxval, size);
  for (size_t i = 0; i < 8; i++) {
    printf("%d",array[i]);
  }
  return 0;
}

void maxarray (int array[], int maxval, int size){
  int i=0;
  for (size_t i = 0; i < size; i++) {
    if (array[i]>maxval)
    {
      array[i]=0;
    }
  }
}
