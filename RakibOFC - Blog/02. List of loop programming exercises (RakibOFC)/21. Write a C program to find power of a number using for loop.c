#include<stdio.h>

int main()
{
    int i, num, power, result = 1;

    printf("Find power of a number using for loop.\n\nNumber: ");
    scanf("%d", &num);

    printf("Power: ");
    scanf("%d", &power);

    for(i = 0; i < power; i++)
    {
        result = result * num;
    }
    printf("\n%d Power %d = %d\n", num, i, result);

    return 0;
}
