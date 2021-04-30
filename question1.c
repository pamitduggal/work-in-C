#include <stdio.h>


int main()

{
    int add,sub,divs,mul;

    int a=0,b=0;

    int choice=0;

    printf("Calculator Programme\n");

    printf("Please enter your choice (1-4)\n ");

    printf("1.Addition\n 2.Subtraction\n 3.Division\n 4.Multiplication\n");

    scanf("%d",&choice);
    printf("\nPlease Enter 2 No's \n");

    scanf("%d %d",&a,&b);

    switch(choice)

    {
        
case 1 : add=a+b;
                 
printf("Addition of %d and %d is = %d",a,b,add);
                 
break;
        
case 2 : sub=a-b;
                 
printf("Subtraction of %d and %d is = %d",a,b,sub);
                
 break;
        
case 3 : divs=a/b;
                 
printf("Division of %d and %d is = %d",a,b,divs);
                
 break;
        
case 4 : mul=a+b;
                 
printf("Multiplication of %d and %d is = %d",a,b,mul);
                 
break;
        
default: printf("Wrong Choice ! Please Try Again");
                 
break;
    
}
   
 return 0;

}