#include <stdio.h>
#include <string.h>
 
int main()
{
  char a[100];
 
  printf("Enter a string to check if it is a palindrome\n");
  scanf("%s", a);
 
  int len = strlen(a);
  for(int i = 0; i < len / 2; i++){
    if(a[i] != a[len - i -1]){
      printf("%s is not palindrome\n", a);
      return 0;
    }
  }
  printf("%s is palindrome\n", a);
  return 0;
}