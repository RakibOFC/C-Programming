#include<stdio.h>
#include<ctype.h>
main()
{
    char ch;
    printf("Press any key\n");
    ch = getchar();
    if(isalpha(ch)>0)
        printf("The character is a letter.\n");
    else if(isdigit(ch)>0)
        printf("The character is a digit.\n");
    else
        printf("The character is not alphanumaric.\n");
}
