#include<stdio.h>

int factorial(int f)
{
    int i, fact = 1;

    for(i = 1; i <= f; i++)
    {
        fact = fact * i;
    }
    return fact;
}

void main()
{
    int n, r, nCr, nPr;

    printf("Enter value of n and r: ");
    scanf("%d %d", &n, &r);

    nCr = (factorial(n)) / (factorial(r) * factorial(n-r));

    nPr = (factorial(n)) / factorial(n-r);

    printf("nCr = %d\nnPr = %d\n\n", nCr, nPr);
}
