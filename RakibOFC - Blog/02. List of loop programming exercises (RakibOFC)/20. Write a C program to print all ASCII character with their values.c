#include<stdio.h>

int main()
{
    int n;
    printf("Print all ASCII character with their values.\n\n");

    for(n = 0; n <= 255; n++)
    {
        printf("\nASCII value of character %c =  %d\n", n, n);
    }
    return 0;
}
