#include<stdio.h>
void main()
{
    /*
    Calculate salary according to following:
    Basic Salary <= 10000 : HRA = 20%, DA = 80%
    Basic Salary <= 20000 : HRA = 25%, DA = 90%
    Basic Salary > 20000 : HRA = 30%, DA = 95%
    */
    float basicSalary, grossSalary, hra, da;

    printf("Input basic salary of an employee and calculate its Gross salary.\n\n");

    scanf("%f", &basicSalary, printf("\nEnter employee basic salary: "));

    if(basicSalary <= 10000)
    {
        hra = basicSalary * 0.2;
        da = basicSalary * 0.8;
        grossSalary = basicSalary + hra + da;
    }
    else if(basicSalary <= 20000)
    {
        hra = basicSalary * 0.25;
        da = basicSalary * 0.9;
        grossSalary = basicSalary + hra + da;
    }
    else if (basicSalary > 20000)
    {
        hra = basicSalary * 0.3;
        da = basicSalary * 0.95;
        grossSalary = basicSalary + hra + da;
    }
    printf("\nGross Salary: %0.2f\n", grossSalary);
}
