#include<stdio.h>

void main()
{
    int i, j, k = 0, isPrime, size = 5, arr[5], primeNum[5];

    printf("Enter 5 element: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < size; i++)
    {
        if(arr[i] == 2)
        {
            primeNum[k++] = arr[i];
        }
        else
        {
            isPrime = 1;
            for(j = 2; j < arr[i]; j++)
            {
                if(arr[i] % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1)
            {
                primeNum[k++] = arr[i];
            }
        }
    }
    if(k < 2)
    {
        printf("\nPair not possible!");
    }
    for(i = 0; i < ((k * (k+1))/2); i++)
    {
        for(j = i+1; j < k; j++)
        {
            printf("%d,%d\n", primeNum[i], primeNum[j]);
        }
    }
    printf("\n");

}
