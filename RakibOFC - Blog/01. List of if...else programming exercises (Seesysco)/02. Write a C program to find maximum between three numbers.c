#include<stdio.h>
void main()
{
    int num1, num2, num3;
    printf("Find maximum between three numbers.\n");
    scanf("%d", &num1, printf("\nEnter first number: "));
    scanf("%d", &num2, printf("\nEnter second number: "));
    scanf("%d", &num3, printf("\nEnter third number: "));
    if(num1 > num2 && num1 > num3)
    {
        printf("\n%d is maximum number.\n", num1);
    }
    else if(num2 > num1 && num2 > num3)
    {
        printf("\n%d is maximum number.\n", num2);
    }
    else
    {
        printf("\n%d is maximum number.\n", num3);
    }
}
