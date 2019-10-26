#include<stdio.h>

int main ()
{
    double num1, num2;
    char op;

    printf("Operator: %c", '%');

    printf("Enter the first number= ");
    scanf("%lf", &num1);

    printf("Enter the Secound number= ");
    scanf("%lf", &num2);


    printf("Enter Your Operation Here (+,-,*,/,%)= ");
    scanf(" %c", &op);

    switch(op)
    {
    case'+':
    {
        printf("%lf + %lf = %lf", num1, num2, num1+num2);
        break;
    }
    case'-':
    {
        printf("%lf - %lf = %lf", num1, num2, num1-num2);
        break;
    }


    case'*':
    {
        printf("%lf * %lf = %lf", num1, num2, num1*num2);
        break;
    }

    case'/':
    {
        printf("Result %lf / %lf = %lf", num1, num2, num1/num2);
        break;
    }
    case'%':
    {
        printf("Result %.0lf %c %.0lf = %d", num1, '%', num2, ((int)num1 % (int)num2));
        break;
    }
defult:
    printf("This operation is invalid");
    }
    return 0;
}
