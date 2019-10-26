#include<stdio.h>
void main()
{
    int num;
    printf("Check whether a number is divisible by 5 and 11 or not.\n");
    scanf("%d", &num, printf("\nEnter a number: "));
    if(num % 5 == 0)
    {
        printf("\nThis number is divisible by 5.\n");
    }
    else if(num % 11 == 0)
    {
        printf("\nThis number is divisible by 11.\n");
    }
    else
    {
        printf("\nThis number is not divisible by 5 and 11.\n");
    }
}
