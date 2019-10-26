#include<stdio.h>
int main()
{
    int a, b;
    a=5;
    for(b=1; b<=10; b++)
        printf("%d x%3d = %3d\n", a, b, a*b);
}
