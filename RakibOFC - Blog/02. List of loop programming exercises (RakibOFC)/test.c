#include <stdio.h>

#define SIZE 8

int main()
{
    for(int i = 0; i <= 256; i++)
    {
        printf("%d = %c\n", i, i);
    }
}
