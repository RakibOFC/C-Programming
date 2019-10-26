#include<stdio.h>
void main()
{
    char num;
    printf("Input week number and print week day.\n\n");
    scanf("%d", &num, printf("\nEnter week number(1 - 7): "));
    if(num == 1)
    {
        printf("\nWeek number %d\n\n%d for Saturday.\n", num, num);
    }
    else if(num == 2)
    {
        printf("\nWeek number %d\n\n%d for Sunday.\n", num, num);
    }
    else if(num == 3)
    {
        printf("\nWeek number %d\n\n%d for Monday.\n", num, num);
    }
    else if(num == 4)
    {
        printf("\nWeek number %d\n\n%d for Tuesday.\n", num, num);
    }
    else if(num == 5)
    {
        printf("\nWeek number %d\n\n%d for Wednesday.\n", num, num);
    }
    else if(num == 6)
    {
        printf("\nWeek number %d\n\n%d for Thursday.\n", num, num);
    }
    else if(num == 7)
    {
        printf("\nWeek number %d\n\n%d for Friday.\n", num, num);
    }
    else
    {
        printf("\nInvalid week number!\n");
    }
}
