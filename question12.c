#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void update_status(int life, char word[])
{
  char spell;
  printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tLives Remaining  : %d\n", life);
  switch(life)
  {
    case 0:
      printf("\t _____    \n "
             "\t |/   |   \n "
             "\t |    o   \n "
             "\t |  \\|/  \n "
             "\t |_   /\\ \n ");
      break;
    case 1:
      printf("\t _____    \n "
             "\t |/   |   \n "
             "\t |    o   \n "
             "\t |  \\|/  \n "
             "\t |_   /   \n ");
      break;
    case 2:
      printf("\t _____    \n "
             "\t |/   |   \n "
             "\t |    o   \n "
             "\t |  \\|/  \n "
             "\t |_       \n ");
      break;




  }
  printf("\n\n\n\nGuess The Character:\n");
  scanf("%c\n", &spell);
  for (size_t i = 0; i < strlen(word); i++) {
    if (word[i]==spell)
    {

    }

  }
}
int main(void)
{ printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tHANGMAN GAME");
  FILE* file = NULL;
  file = fopen("hangman.txt", "r+");

  if (file != NULL){
    int revive = 10;
    time_t t;
    char word[30];
    srand ((unsigned) time(&t));
    int num = rand()%(1000-1) +1;
    printf("\n");
    int tmp;
    while(num>tmp&&fgets(word,50,file))
    {
        tmp++;
    }
    printf("The Word is : %s\n", word);
    update_status(revive,word);
    fclose(file);
  }
  else{
      printf("Error ! Can't Open file \n");
  }

  return 0;
}
