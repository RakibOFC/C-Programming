#include<stdio.h>
void main()
{
    char ch;
    printf("Input any alphabet and check whether it is vowel or consonant.\n\n");
    scanf("%c", &ch, printf("\nEnter a alphabet: "));
    if(ch == 'a' || ch == 'e' || ch == 'i' ||ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' ||ch == 'O' || ch == 'U')
    {
        printf("\n%c is vowel.\n", ch);
    }
    else
    {
        printf("\n%c is consonant.\n", ch);
    }
}
