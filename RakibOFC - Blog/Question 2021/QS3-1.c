#include<stdio.h>

void decToBin(int number)
{
    int i, bin[8];

    for(i = 0; number > 0; i++)
    {
        bin[i] = number % 2;
        number = number/2;
    }
    for(i = i-1; i >= 0; i--)
    {
        number = (10 * number) + bin[i];
    }
    printf("%d ", number);
}

int main()
{
    int i, size;

    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Output: ");
    for(i = 1; i <= size; i++)
    {
        decToBin(i);
    }
    printf("\n\n");
}
