#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void divminutes (int * hour, int * minute);

int main(int argc, char *argv[]){
  int hour,minute;
  printf("Enter The Hours :\t");
  scanf("%d",&hour);
  printf("Enter the Minutes :\t");
  scanf("%d",&minute);
  divminutes (&hour, &minute) ;
  printf("%d hours and %d minutes\n", hour, minute);
  return 0;
}

void divminutes (int * hour, int * minute){
  *hour = *hour + (*minute/60);
  *minute = *minute%60;
}
