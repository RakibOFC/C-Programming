#include<stdio.h>
void main()
{
    int buy, sell;

    printf("Calculate profit or loss.\n\n");

    scanf("%d", &buy, printf("Purchase Price: "));

    scanf("%d", &sell, printf("\nSelling Price: "));

    if(buy < sell)
    {
        printf("\nProfit!\n");
    }
    else if(sell == buy)
    {
        printf("\nNo Loss No Profit.\n");
    }
    else
    {
        printf("\nLoss!\n");
    }
}
