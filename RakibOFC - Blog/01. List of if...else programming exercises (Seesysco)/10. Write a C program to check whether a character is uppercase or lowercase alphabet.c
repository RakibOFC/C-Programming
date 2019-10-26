#include<stdio.h>
void main()
{
    char ch;
    printf("Check whether a character is uppercase or lowercase alphabet.\n\n");
    scanf("%c", &ch, printf("\nEnter a character: "));
    if(ch >= 'a' && ch <= 'z')
    {
        printf("\n%c is lowercase alphabet.\n", ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("\n%c is uppercase alphabet.\n", ch);
    }
    else
    {
        printf("\nInvalid Alphabet!\n");
    }
}
