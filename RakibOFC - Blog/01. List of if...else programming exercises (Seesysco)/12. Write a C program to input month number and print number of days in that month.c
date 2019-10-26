#include<stdio.h>
void main()
{
    char num;
    printf("Input month number and print number of days in that month.\n\n");
    scanf("%d", &num, printf("\nEnter month number(1 - 12): "));
    if(num == 1)
    {
        printf("\nMonth number %d\n\n%d for January.\n", num, num);
    }
    else if(num == 2)
    {
        printf("\nMonth number %d\n\n%d for February.\n", num, num);
    }
    else if(num == 3)
    {
        printf("\nMonth number %d\n\n%d for March.\n", num, num);
    }
    else if(num == 4)
    {
        printf("\nMonth number %d\n\n%d for April.\n", num, num);
    }
    else if(num == 5)
    {
        printf("\nMonth number %d\n\n%d for May.\n", num, num);
    }
    else if(num == 6)
    {
        printf("\nMonth number %d\n\n%d for June.\n", num, num);
    }
    else if(num == 7)
    {
        printf("\nMonth number %d\n\n%d for July.\n", num, num);
    }
    else if(num == 8)
    {
        printf("\nMonth number %d\n\n%d for August.\n", num, num);
    }
    else if(num == 9)
    {
        printf("\nMonth number %d\n\n%d for September.\n", num, num);
    }
    else if(num == 10)
    {
        printf("\nMonth number %d\n\n%d for October.\n", num, num);
    }
    else if(num == 11)
    {
        printf("\nMonth number %d\n\n%d for November.\n", num, num);
    }
    else if(num == 12)
    {
        printf("\nMonth number %d\n\n%d for December.\n", num, num);
    }
    else
    {
        printf("\nInvalid Month number!\n");
    }
}
