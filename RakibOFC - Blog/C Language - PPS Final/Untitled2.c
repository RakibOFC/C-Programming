#include<stdio.h>

int main()
{
    int i, n = 0;

    for(i = 1; n < 5; i = i*10, n++)
    {
        printf("%d\n", i);
    }
}
