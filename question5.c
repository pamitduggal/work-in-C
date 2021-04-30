#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  char string[100];
  char encrypted[100];
  char decrypted[100];
  int key;

  printf(" Enter Text To Encrypt:\t");
  scanf("%[^\n]", &string);

  printf("Enter Key For Encryption:\t");
  scanf("%d", &key);
  key = key%26;

  for (size_t i = 0; i < strlen(string); i++) {
    if ((int)string[i]==32)
    {
      encrypted[i]=' ';
    }
    else
    {
        encrypted[i]=(((int)string[i]-97+key)%26)+97;
    }
    printf("%c", encrypted[i] );
  }
  printf("\n\n");

  for (size_t i = 0; i < strlen(string); i++) {
    decrypted[i]=(((int)encrypted[i]-97-key)%26)+97;
    printf("%c", decrypted[i] );
  }

  return 0;
}
