#include<stdio.h>
#include<windows.h>
#include<time.h>

int main()
{
    int a[100], N, i, j, temp, num, mid, start, end, even_count = 0, odd_count = 0;

    printf("Enter array size: ");
    scanf("%d", &N);

    printf("Elements: ");
    for(i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < N; i++)
    {
        for(j = i ; j > 0; j--)
        {
            if(a[j - 1] > a[j])
            {
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nOutput:\nEven: ");
    for(i = 0; i < N; i++)
    {
        if(a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
            even_count++;
        }
    }
    printf("\nOdd: ");
    for(i = 0; i < N; i++)
    {
        if(a[i] % 2 != 0)
        {
            printf("%d ", a[i]);
            odd_count++;
        }
    }

    printf("\n\nEnter the Element you are looking for: ");
    scanf("%d", &num);

    start = 0;
    end  = N - 1;
    mid = (start + end) / 2;

    while(a[mid] != num && start <= end)
    {
        if(num > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    if(a[mid] == num)
    {
        if(num % 2 == 0)
        {
            printf("%d found in the even list\n", num);
        }
        else if(num % 2 != 0)
        {
            printf("%d found in the odd list\n", num);
        }
    }
    else
    {
        printf("%d not found\n", num);
    }

    printf("\nNumber of Elements in the Even list: %d\n", even_count);
    printf("\nNumber of Elements in the Odd list: %d\n\n", odd_count);
}
