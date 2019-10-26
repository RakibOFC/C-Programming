#include<stdio.h>
void main()
{
    int birth_year, present_year;

    printf("Enter Birth Year: ");
    scanf("%d", &birth_year);
    printf("Enter Present Year:" );
    scanf("%d", &present_year);

    int age = (present_year - birth_year);

    if(age < 18)
    {
        printf("Not AUDLT\n\n");
    }
    else if(age > 18)
    {
        printf("AUDLT\n\n");
    }
    else
    {
        printf("Neutral\n\n");
    }
}
