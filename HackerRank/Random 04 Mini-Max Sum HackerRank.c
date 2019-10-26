#include <stdio.h>

int main()
{
    int i;
    long long int sum = 0, arr[5], arr2[5], max, min;

    for(i = 0; i < 5; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for(i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    for(i = 0; i < 5; i++)
    {
        arr2[i] = sum-arr[i];
    }

    max = min = arr2[0];

    for(i = 0; i < 5; i++)
    {
        if(max < arr2[i])
        {
            max = arr2[i];
        }
        if(min > arr2[i])
        {
            min = arr2[i];
        }
    }
    printf("%lld %lld", min, max);

}
