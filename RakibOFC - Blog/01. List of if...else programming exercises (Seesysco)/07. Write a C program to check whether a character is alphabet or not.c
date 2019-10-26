#include<stdio.h>
void main()
{
    char ch;
    printf("Check whether a character is alphabet or not.\n");
    scanf("%c", &ch, printf("\nEnter here: "));
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("\n%c is an alphabet.\n", ch);
    }
    else
    {
        printf("\n%c is not an alphabet.\n", ch);
    }
}
