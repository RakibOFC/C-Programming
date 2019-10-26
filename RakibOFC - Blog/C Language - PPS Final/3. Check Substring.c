#include<stdio.h>
#include<string.h>

void main()
{
    int i, j, temp, count = 0, count2 = 0;
    char str[50], subString[20];

    printf("String: ");
    gets(str);

    printf("Substring: ");
    gets(subString);

    while (str[count] != '\0')
    {
        count++;
    }
    while (subString[count2] != '\0')
    {
        count2++;
    }

    for (i = 0; i <= count - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            temp = 1;
            if (str[j] != subString[j - i])
            {
                temp = 0;
                break;
            }
        }
        if (temp == 1)
            break;
    }
    if (temp == 1)
    {
        printf("\nMatch found\n\n");
    }
    else
    {
        printf("\nNo match found\n\n");
    }
}
