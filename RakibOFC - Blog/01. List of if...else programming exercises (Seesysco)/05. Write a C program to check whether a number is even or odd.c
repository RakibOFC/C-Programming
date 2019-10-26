#include<stdio.h>
void main()
{
    int num;
    printf("Check whether a number is even or odd.\n");
    scanf("%d", &num, printf("\nEnter a number: "));
    if(num % 2 == 0)
    {
        printf("\nThis number is even.\n");
    }
    else
    {
        printf("\nThis number is odd.\n");
    }
}
