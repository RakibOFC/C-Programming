#include<stdio.h>
#include<math.h>

void main()
{
    long int r, m, u;

    printf("Enter r, m, & u: ");
    scanf("%ld %ld %ld", &r, &m, &u);

    long int result_one = pow(r, 2) - pow(m, 2);
    long int result_two = pow(r, 3) + pow(u, 3);

    printf("\nResult One: %ld\nResult Two: %ld\n\n", result_one, result_two);
}
