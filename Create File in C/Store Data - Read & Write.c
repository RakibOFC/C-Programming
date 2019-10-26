#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

struct info
{
    char name[30];
    int num;
} list[100];

int main()
{
    SetConsoleTitle("See System Code - seesysco.blogspot.com");

    int option, i = 0, j, size = 0;
    FILE *fp;

mainMenu:

    printf("1. Insert New Number\n2. See Number List\n\nEnter a following option: ");
    scanf("%d", &option);

    switch(option)
    {
    case 1:

        fp = fopen("NewFileDataStore.txt", "wb"); //It was "a".

        //fread(&i, sizeof(i), 1, fp);

        printf("i = %d\nEnter a number: ", i);
        scanf("%d", &list[i].num);

        printf("Enter a name: ");
        scanf("%s", list[i].name);

        i++;
        size++;

        fwrite(&list, sizeof(list), 1, fp);
        fwrite(&i, sizeof(i), 1, fp);
        fwrite(&size, sizeof(size), 1, fp);

        fclose(fp);

        break;

    case 2:

        fp = fopen("NewFileDataStore.txt", "rb");


        fread(&list, sizeof(list), 1, fp);
        fread(&i, sizeof(i), 1, fp);
        fread(&size, sizeof(size), 1, fp);

        printf("\nSize: %d\n", size);

        for(j = 0; j < size; j++)
        {
            {
                printf("\nNumber: %d\n", list[j].num);
                printf("\nName: %s\n\n", list[j].name);
            }
        }
        fclose(fp);

        break;

    default:
        goto mainMenu;
    }
    goto mainMenu;
}
