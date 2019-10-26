#include<stdio.h>
void main()
{
    char c;

    printf("Print all alphabets from a to z. - using while loop.\n");

    c = 'a';

    while(c <= 'z')
    {
        printf("\n%c\n", c);
        c++;
    }
}
