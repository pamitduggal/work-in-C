#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
printf("\t\t\t\tThe Story \n\n\n");
  FILE* file = NULL;
  file = fopen("story.txt", "r+");

  if ( file != NULL){
    char string[100];
    while(fgets(string,100,file))
    {

    printf("\t%s", string);
    }
    fclose(file);
  }
  else{
      printf("Error ! Please Try Again or select another Supported File . Thanks !\n");
  }
}
