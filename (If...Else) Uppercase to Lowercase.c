 #include<stdio.h>
int main()
{
    char code;

    printf("Enter a character: ");
    scanf("%c", &code);

    if (code>=65 && code<90)
        printf("\nLowercase of %c = %c\n", code, code+32);
    else
        printf("\nUppercase of %c = %c\n", code, code-32);

    return 0;
}
