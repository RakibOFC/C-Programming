#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int sum()
{
    int num1, num2;

    printf("Summation\nEnter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nSum = %d\n", num1 + num2);
}

int sub()
{
    int num1, num2;

    printf("Subtraction\nEnter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nSubtraction = %d\n", num1 - num2);
}

int multi()
{
    int num1, num2;

    printf("Multiplication\nEnter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nMultiplication = %d\n", num1 * num2);
}

int divi()
{
    float num1, num2;

    printf("Division\nEnter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\nDivision = %f\n", num1 / num2);
}

int power()
{
    double num, p, pw;

    printf("Power\nNumber: ");
    scanf("%lf", &num);

    printf("Power : ");
    scanf("%lf", &p);

    pw = pow(num, p);

    printf("\n%.0lf to the power %.0lf = %.0lf\n", num, p, pw);
}

int matrixSum()
{
    int a[30][30], b[30][30], c[30][30], size, i, j;

    printf("Matrix Summation\nEnter row and column size: ");
    scanf("%d", &size);

    printf("\nEnter first matrix:\n");
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nSum of two matrix:\n");
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            c[i][j] = a[i][j] + b[i][j];

            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    char oprtr;

start:

    printf("\n\t\t\t===============================\n");
    printf("\t\t\t------- Mini Calculator -------\n");
    printf("\t\t\t===============================\n\n");

    printf("Enter + symbol for Summation\n");
    printf("Enter - symbol for Subtraction\n");
    printf("Enter * symbol for Multiplication\n");
    printf("Enter / symbol for Division\n");
    printf("Enter ^ symbol for Power\n");
    printf("Enter M for Matrix Summation\n");
    printf("Enter C for Clear History\n");
    printf("Enter Q for Quit\n");

    while(1)
    {
        printf("\n");
        printf("Enter any symbol for continue calculation: ");

        oprtr = getch();

        switch(oprtr)
        {
        case '+':
            sum();
            break;

        case '-':
            sub();
            break;

        case '*':
            multi();
            break;

        case '/':
            divi();
            break;

        case '^':
            power();
            break;

        case 'M':
        case 'm':
            matrixSum();
            break;

        case 'C':
        case 'c':
            system("cls");
            goto start;
            break;

        case 'Q':
        case 'q':
            exit(0);
            break;

        default :
            system("cls");
            goto start;
        }
    }
}
