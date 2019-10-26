#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

void displayDesign()
{
    printf("\n\t\t\t\tMini Calculator\n\n");

    printf("Enter + symbol for Addition\n");
    printf("Enter - symbol for Subtraction\n");
    printf("Enter * symbol for Multiplication\n");
    printf("Enter / symbol for Division\n");
    printf("Enter ^ symbol for Power\n");
     printf("Enter Q symbol for Quit\n");
}

int add()
{
    int num, sum = 0, n = 0, number;

    printf("\nEnter the number of elements you want to add: ");
    scanf("%d", &num);

    printf("Please enter %d numbers one by one:\n", num);
    while(n < num)
    {
        scanf("%d", &number);
        sum = sum + number;
        n++;
    }
    printf("Sum of %d numbers = %d \n", num, sum);
}

void sub()
{
    int a, b, c = 0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    c = a - b;
    printf("\n%d - %d = %d\n", a, b, c);
}

void multiplication()
{
    int a, b, mul=0;
    printf("\nPlease enter first numb   : ");
    scanf("%d", &a);
    printf("Please enter second number: ");
    scanf("%d", &b);
    mul=a*b;
    printf("\nMultiplication of entered numbers = %d\n",mul);
}

void division()
{
    int a, b, d=0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    d=a/b;
    printf("\nDivision of entered numbers=%d\n",d);
}

void power()
{
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);

    printf("power : ");
    scanf("%lf",&num);

    p=pow(a,num);

    printf("\n%lf to the power %lf = %lf \n",a,num,p);
}

int main()
{
    char oprtr;

start:

    displayDesign();

    while(1)
    {
        printf("\n");
        printf("Enter: ");

        oprtr = getche();

        switch(oprtr)
        {
        case '+':
            add();
            break;

        case '-':
            sub();
            break;

        case '*':
            multiplication();
            break;

        case '/':
            division();
            break;

        case '^':
            power();
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
