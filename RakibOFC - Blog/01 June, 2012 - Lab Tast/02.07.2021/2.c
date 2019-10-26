//Question 2.
#include<stdio.h>
#include<math.h>

int main()
{
    float D, b, a, c, x, x1, x2;

    printf("Enter a, b, & c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = ((b*b) - 4*a*c);

    if(D > 0)
    {
        x1 = (-b + sqrt(D))/(2*a);
        x2 = (-b - sqrt(D))/(2*a);

        printf("X1: %.3f\nx2: %.3f\n\n", x1, x2);
    }
    else if(D == 0)
    {
        x = (b*b)/(2*a);

        printf("X: %f\n\n");
    }
    else if(D < 0)
    {
        printf("No Solution\n\n");
    }
    return 0;
}
