#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int arg, char *argv[]){
  int array[5];
  for (size_t i = 0; i < 5; i++) {
    printf("%d ", &array[i] );
  }
  printf("\n");
}
