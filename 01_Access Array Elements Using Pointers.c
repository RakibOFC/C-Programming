#include<stdio.h>

void main()
{
    int i, arr[] = {1, 2, 3, 4, 5}, *p_arr;

    p_arr = &arr;

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", *(p_arr + i));
    }
}
