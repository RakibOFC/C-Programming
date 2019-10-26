#include<stdio.h>

int main()
{
    int i, j, num, newNumber;

    printf("Print all Perfect numbers between 1 to n.\n\n");
    printf("Enter number: ");
    scanf("%d", &num);

    for(i = 1; i < num; i++)
    {
        newNumber = 0;

        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                newNumber = newNumber + j; //Or, newNumber += j;
            }
        }
        if(i == newNumber)
        {
            printf("\n%d\n", i);
        }
    }
    return 0;
}
