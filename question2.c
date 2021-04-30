#include <stdio.h>
#include <stdlib.h>

float find(int dice[6], int result[6])
{
  for (int i = 0; i < 6; i++) {
    result[dice[i]]++;
    if(result[dice[i]]==4)
    {
      return 1;
    }
  }
  return 0;
}

int main()
{
 time_t t;
printf("The Dice \n\n");
int dice[6] = {6,1,2,3,4,5};
int result[6] = {0,0,0,0,0,0};

while(!find(dice, result))
{
  srand ((unsigned) time(&t));
  for(int i=0; i<5; i++){
  	dice[i] = rand()%(6-1) +1;
  	printf("%d ",dice[i]);
  }
  printf("\n");
}
	return 0;
}
