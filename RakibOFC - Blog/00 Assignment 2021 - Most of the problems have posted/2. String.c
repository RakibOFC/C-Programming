#include<stdio.h>

int main()
{
    int i, j, k = 0, length1, length2, vowel = 0, a = 0, e = 0, iV = 0, o = 0, u = 0;
    char s1[30], s2[30];

    printf("S1: ");
    gets(s1);

    printf("S2: ");
    gets(s2);

    for(i = 0; s1[i] != '\0'; i++);
    length1 = i;

    for(i = 0; s2[i] != '\0'; i++);
    length2 = i;

    if(length1 == length2)
    {
        for(i = 0; i < length1; i++)
        {
            if(s1[i] == 'a' && a == 0)
            {
                a = 1;
                vowel++;
            }
            else if(s1[i] == 'e' && e == 0)
            {
                e = 1;
                vowel++;
            }
            else if(s1[i] == 'i' && iV == 0)
            {
                iV = 1;
                vowel++;
            }
            else if(s1[i] == 'o' && o == 0)
            {
                o = 1;
                vowel++;
            }
            else if(s1[i] == 'u' && u == 0)
            {
                u = 1;
                vowel++;
            }
            if(s2[i] == 'a' && a == 0)
            {
                a = 1;
                vowel++;
            }
            else if(s2[i] == 'e' && e == 0)
            {
                e = 1;
                vowel++;
            }
            else if(s2[i] == 'i' && iV == 0)
            {
                iV = 1;
                vowel++;
            }
            else if(s2[i] == 'o' && o == 0)
            {
                o = 1;
                vowel++;
            }
            else if(s2[i] == 'u' && u == 0)
            {
                u = 1;
                vowel++;
            }
        }
    }

    if(vowel == 5)
    {
        printf("\nTwin String");
    }
    else
    {
        printf("\nNot Twin String");
    }
    printf("\n\n");
}
