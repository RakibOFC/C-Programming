#include<stdio.h>

void main()
{
    char ch;

    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c is vowel.", ch-32);
    }
    else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is vowel.", ch+32);
    }
    else if(ch >= 'A' && ch < 'Z' || ch >= 'a' && ch < 'z')
    {
        if(ch == 'D' || ch == 'd' || ch == 'H' || ch == 'h' || ch == 'N' || ch == 'n' || ch == 'T' || ch == 't')
        {
            printf("Next consonant of %c is %c", ch, ch+2);
        }
        else
        {
            printf("Next consonant of %c is %c", ch, ch+1);
        }
    }
    else
    {
        printf("ASCII value of %c is %d", ch, ch);
    }
}
