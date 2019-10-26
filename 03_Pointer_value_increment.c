#include<stdio.h>

void shift_val(int *a);

void main()
{
    int a = 1, *p_a;

    p_a = &a;

    printf("In main function, value of a is %d\n\n", *p_a);

    shift_val(p_a);

    printf("After call function, value of a is %d\n\n", *p_a);
}

void shift_val(int *p)
{
    printf("Value of a is %d, in another function.\n\n", ++(*p));
}
