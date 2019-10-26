#include<stdio.h>

void shift_val(int *a, int *b);

void main()
{
    int a = 1, b = 2;
    int *p_a, *p_b;

    p_a = &a;
    p_b = &b;

    printf("1st value of a, b, in main function is %d, %d\n\n", *p_a, *p_b);

    a = 3;
    b = 4;

    printf("After change the value of a, b in main function is %d, %d\n\n", *p_a, *p_b);

    //pass(&a, &b);
    shift_val(p_a, p_b);

    printf("Value changed in another function - value of a, b is %d, %d\n\n", *p_a, *p_b);
}

void shift_val(int *a, int *b)
{
    printf("Passed the address of a, b in another function.\nValue of a, b is %d, %d\n\n", *a, *b);

    *a = 5;
    *b = 6;
}
