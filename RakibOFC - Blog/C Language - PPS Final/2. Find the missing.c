#include<stdio.h>

int main()
{
    int i, j, sum, arrSum = 0, n;

    scanf("%d", &n);
    int numbers[n];

    for(i = 0; i < n-1; i++)
    {
        scanf("%d", &numbers[i]);
    }

    sum = (n * (n+1))/2;

    for(i = 0; i < n-1; i++)
    {
        arrSum = arrSum + numbers[i];
    }
    printf("Missing Number is: %d\n\n", sum - arrSum);

    return 0;
}
