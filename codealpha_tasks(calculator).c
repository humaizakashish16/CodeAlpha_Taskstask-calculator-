#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float num1, num2;

    printf("Enter First Number\n");
    scanf("%f",&num1);

    printf("Enter Second Number\n");
    scanf("%f",&num2);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter Your Choice\n");
    scanf("%d",&choice);

    switch(choice){
      case 1:
           printf("The Addition of two numbers is %.2f",num1+num2);
      break;

      case 2:
         printf("The Subtraction of two numbers is %.2f",num1-num2);
      break;

      case 3:
        printf("The Multiplication of two numbers is %.2f",num1*num2);
      break;

      case 4:
          if(num2!=0)
        printf("the Division of two numbers is %.2f",num1/num2);

        else
        printf("division by zero is not possible");
      break;

      default:
          printf("Invalid Choice");
    }
    return 0;
}
