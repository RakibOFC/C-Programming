#include <stdio.h>

void main()
{
    FILE *fptr;
    char name[20];
    int age, option;
    float salary;

    printf("Enter option: ");
    scanf("%d", &option);

    switch(option)
    {
    case 1:
    {
        /*  open for writing */
        fptr = fopen("emp.txt", "w");

        if (fptr == NULL)
        {
            printf("File does not exists \n");
            return;
        }
        printf("Enter the name \n");
        scanf("%s", name);
        fprintf(fptr, "Name    = %s\n", name);
        printf("Enter the age\n");
        scanf("%d", &age);
        fprintf(fptr, "Age     = %d\n", age);
        printf("Enter the salary\n");
        scanf("%f", &salary);
        fprintf(fptr, "Salary  = %.2f\n", salary);
        fclose(fptr);

        break;
    }
    case 2:
    {
        fptr = fopen("emp.txt", "r");
        fread(&name, sizeof(name), 1, fptr);
        printf("Name    = %s\n", name);
        printf("Age     = %d\n", age);
        printf("Salary  = %.2f\n", salary);

        break;
    }
    }
}
