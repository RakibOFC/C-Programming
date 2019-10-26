#include<stdio.h>

int main()
{
    float attendance, ct, qt, assignment, mid_mark, final_mark, total_mark;

    printf("Enter Attendance, Class test, Quiz test, Assignment, Midterm and Final Exam: ");
    scanf("%f %f %f %f %f %f", &attendance, &ct, &qt, &assignment, &mid_mark, &final_mark);
    //Input: 2.5 7.5 3.5 7 21.5 33

    total_mark = (attendance + ct + qt + assignment + mid_mark + final_mark);

    if(total_mark >= 80 && total_mark <= 100)
    {
        printf("Total Mark: %f & Grade: A+\n\n", total_mark);
    }
    else if(total_mark >= 70 && total_mark <= 79)
    {
        printf("Total Mark: %f & Grade: A\n\n", total_mark);
    }
    else if(total_mark >= 60 && total_mark <= 69)
    {
        printf("Total Mark: %f & Grade: A-\n\n", total_mark);
    }
    else if(total_mark >= 50 && total_mark <= 59)
    {
        printf("Total Mark: %f & Grade: B\n\n", total_mark);
    }
    else
    {
        printf("Total Mark: %f & Grade: F\n\n", total_mark);
    }

    return 0;
}
