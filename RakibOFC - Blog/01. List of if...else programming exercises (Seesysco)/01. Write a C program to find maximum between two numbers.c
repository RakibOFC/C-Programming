#include<stdio.h>
void main()
{
    int num1, num2;
    printf("Find maximum between two numbers.\n");
    scanf("%d", &num1, printf("\nEnter first number: "));
    scanf("%d", &num2, printf("\nEnter second number: "));
    if(num1 > num2)
    {
        printf("\n%d is maximum number.\n", num1);
    }
    else
    {
        printf("\n%d is maximum number.\n", num2);
    }
}
