#include<stdio.h>
main()
{
    char answer;
    printf("Would you like to know my name?\n");
    printf("Type Y for YES and N for NO: ");
    answer = getchar();
    if (answer == 'Y' || answer == 'y')
        printf("My name is RAKIB\n");
    else
        printf("You are good for nothing");
}
