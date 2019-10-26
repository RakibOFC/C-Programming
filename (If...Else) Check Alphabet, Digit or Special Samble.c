#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 97 && ch <= 122 || ch >= 65 && ch <= 90)
    {
        printf("Alphabet");
    }
    else if(ch >= 48 && ch <= 57)
        {
            printf("Digit");
        }
    else
        {
            printf("Special Samble");
        }
    return 0;
}
