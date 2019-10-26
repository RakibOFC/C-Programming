#include<stdio.h>

int main()
{
    int n, num, newNumber = 0;
    printf("Check whether a number is Perfect number or not.\n\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    for(n = 1; n < num; n++)
    {
        if(num % n == 0)
        {
            newNumber = newNumber + n; //Or, newNumber += n;
        }
    }
    if(num == newNumber)
    {
        printf("\n%d is a perfect number.\n", num);
    }
    else
    {
        printf("\n%d is not a perfect number.\n", num);
    }
    return 0;
}
