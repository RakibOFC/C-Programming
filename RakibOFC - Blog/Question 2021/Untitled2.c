#include<stdio.h>

int main()
{
    int a[100], N = 1, i, j, temp, num;
    char ch;

    printf("Enter elements: ");
    for(i = 0; i < N; i++)
    {
        scanf("%c", &ch);

        num = ch - '0';
        a[i] = num;
        N++;

        if(ch == 'P')
        {
            N = i;
            printf("N = %d\n", N);
        }
    }
    for(i = 0; i < N; i++)
    {
        printf("Number: %d\n", a[i]);
    }

    printf("N = %d", N);

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

    printf("\nAfter sort: ");
    for(i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
}
