#include<stdio.h>
#include <stdbool.h>

void main()
{
    int i, j, length, count = 0, miss_match, sameChar = 0;
    char s1[30], s2[30];
    bool noVowel = true, noLowercase = true, noUppercase = true, noDigit = true, noSpecialSymbol = true;

    printf("S1: ");
    gets(s1);
s2:
    printf("S2: ");
    gets(s2);

    for(i = 0; s2[i] != '\0'; i++);
    length = i;

    for(i = 0; i < length; i++)
    {
        if(s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u'
                || s2[i] == 'A' || s2[i] == 'E' || s2[i] == 'I' || s2[i] == 'O' || s2[i] == 'u')
        {
            noVowel = false;
        }
        else if(s2[i] >= 'A' && s2[i] <= 'Z')
        {
            noUppercase = false;
        }
        else if(s2[i] >= 'a' && s2[i] <= 'z')
        {
            noLowercase = false;
        }
        else if(s2[i] >= '0' && s2[i] <= 9)
        {
            count++;
            noDigit = false;
        }
        else if(s2[i] >= 33 && s2[i] <= 47 || s2[i] >= 58 && s2[i] >= 54)
        {
            noSpecialSymbol = false;
        }
        for(j = 0; j < length; j++)
        {
            if(s1[i] == s2[j])
            {
                sameChar++;
            }
        }
    }
    if(noVowel == true && noLowercase == true && noUppercase == true && noDigit && true && count > 1 && noSpecialSymbol == true)
    {
        printf("\nAt least 1 vowel, 2 consonants (Upper and Lower both), 2 digit and 1 special symbol.\nEnter: ");
        goto s2;
    }
    else
    {
        miss_match = 100 - ((sameChar * 100)/length);
    }
    if(miss_match < 50)
    {
        printf("Weak Password.");
        printf("\nMissmatch: %d", miss_match);
    }
    else
    {
        printf("Strong Password.");
        printf("\nMissmatch: %d", miss_match);
    }
}
