#include<stdio.h>
void main()
{
    int amount, note1000, note500, note100, note50, note20, note10, note5, note2, note1;
    printf("Count total number of notes in given amount.\n\n");
    scanf("%d", &amount, printf("\nEnter your amount: "));

    note1000 = amount / 1000;
    amount = amount % 1000;
    printf("Note of 1000: %d\n", note1000);

    note500 = amount / 500;
    amount = amount % 500;
    printf("Note of 500: %d\n", note500);

    note100 = amount / 100;
    amount = amount % 100;
    printf("Note of 100: %d\n", note100);
    note50 = amount / 50;
    amount = amount % 50;
    printf("Note of 50: %d\n", note50);

    note20 = amount / 20;
    amount = amount % 20;
     printf("Note of 20: %d\n", note20);

    note10 = amount / 10;
    amount = amount % 10;
    printf("Note of 10: %d\n", note10);

    note5 = amount / 5;
    amount = amount % 5;
    printf("Note of 5: %d\n", note5);

    note2 = amount / 2;
    printf("Note of 2: %d\n", note2);

    note1 = amount % 2;
    printf("Note of 1: %d\n", note1);
}

