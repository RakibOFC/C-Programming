#include <stdio.h>

int Input_Number()
{
    int number, i = 0;

    scanf("%d", &number);
    if(number < 9999 || number > 99999)
    {
        return 0;
    }
    else
    {
        return number;
    }
}

int character_extractor(int n)
{
    char i = 4, password[10], lastDigit;

    while(n >= 1)
    {
        lastDigit = n%10;

        if(lastDigit == 1)
        {
            password[i] = '#';
        }
        else if(lastDigit == 2)
        {
            password[i] = 'a';
        }
        else if(lastDigit == 3)
        {
            password[i] = 't';
        }
        else if(lastDigit == 4)
        {
            password[i] = 'j';
        }
        else if(lastDigit == 5)
        {
            password[i] = '9';
        }
        else if(lastDigit == 6)
        {
            password[i] = 'E';
        }
        else if(lastDigit == 7)
        {
            password[i] = '@';
        }
        else if(lastDigit == 8)
        {
            password[i] = '2';
        }
        else if(lastDigit == 9)
        {
            password[i] = 'F';
        }
        else if(lastDigit == 0)
        {
            password[i] = '?';
        }
        n = n/10;
        i--;
    }
    password[5] = '\0';
    printf("%s", password);
}

int main()
{
    int num;
    num = Input_Number();
    if(num == 0)
    {
        printf("Wrong input");
    }
    else
    {
        character_extractor(num);
    }
}
