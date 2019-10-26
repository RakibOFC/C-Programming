#include<stdio.h>
void main()
{
    int a, b, c;

    printf("Enter two number for swap: ");
    scanf("%d %d", &a, &b);

    //a = 1, b = 2
    c = a;
    a = b;
    b = c;
    printf("After swaping: %d %d\n\n", a, b);
    return 0;
}
