#include<stdio.h>
int main()
{
    int a;
x:
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a >= 20)
    {
        a = a - 5;
        printf("%d (-5)", a);
    }
    else
    {
        a = a - 5;
        printf("%d (-2)", a - 2);
    }
    printf("\n");
    goto x;

    return 0;
}
