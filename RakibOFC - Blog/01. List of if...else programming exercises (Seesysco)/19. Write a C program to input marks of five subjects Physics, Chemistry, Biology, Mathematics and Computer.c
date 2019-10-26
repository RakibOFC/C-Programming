#include<stdio.h>
void main()
{
    /*
    Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
    Percentage >= 80% : Grade A+
    Percentage >= 75% : Grade A
    Percentage >= 70% : Grade A-
    Percentage >= 65% : Grade B+
    Percentage >= 60% : Grade B
    Percentage >= 55% : Grade B-
    Percentage >= 50% : Grade C+
    Percentage >= 45% : Grade C
    Percentage >= 40% : Grade D
    Percentage < 40% : Grade F
    */
    int phy, che, bio, mat, c, marks;

    printf("Input marks of five subjects and calculate the grade.\n\n");

    scanf("%d", &phy, printf("\nPhysics: "));

    scanf("%d", &che, printf("\nChemistry: "));

    scanf("%d", &bio, printf("\nBiology: "));

    scanf("%d", &mat, printf("\nMathematics: "));

    scanf("%d", &c, printf("\nComputer: "));

    marks = (phy + che + bio + mat + c) / 5;

    if(marks >= 80 && marks <= 100)
    {
        printf("\nGrade A+\n");
    }
    else if(marks >= 75 && marks <= 79)
    {
        printf("\nGrade A\n");
    }
    else if(marks >= 70 && marks <= 74)
    {
        printf("\nGrade A-\n");
    }
    else if(marks >= 65 && marks <= 69)
    {
        printf("\nGrade B+\n");
    }
    else if(marks >= 60 && marks <= 64)
    {
        printf("\nGrade B\n");
    }
    else if(marks >= 55 && marks <= 59)
    {
        printf("\nGrade B-\n");
    }
    else if(marks >= 50 && marks <= 54)
    {
        printf("\nGrade C+\n");
    }
    else if(marks >= 45 && marks <= 49)
    {
        printf("\nGrade C\n");
    }
    else if(marks >= 40 && marks <= 44)
    {
        printf("\nGrade D\n");
    }
    else if(marks < 40)
    {
        printf("\nFail!\n");
    }
    else
    {
        printf("\nInvalid marks!\n");
    }
}
