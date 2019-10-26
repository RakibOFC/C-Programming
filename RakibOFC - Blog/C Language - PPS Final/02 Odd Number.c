#include<stdio.h>

void main()
{
    int i, k = 0, arr[20], num, new_num = 0, digit, isPrime = 1;

    scanf("%d", &num);

    while(num > 0)
    {
        digit = num % 10;
        num = num / 10;

        if(digit % 2 != 0)
        {
            arr[k] = digit;
            k++;
        }
    }

    for(i = k - 1; i >= 0; i--)
    {
        new_num = new_num*10 + arr[i];
    }
    for(i = 2; i < new_num; i++)
    {
        if(new_num % i == 0)
        {
            isPrime = 0;
        }
    }
    if(isPrime == 1)
    {
        printf("%d. Prime", new_num);
    }
    else
    {
        printf("%d. Not Prime", new_num);
    }
}
