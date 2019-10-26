#include<stdio.h>
#define MAX 100

int main()
{
    int i, NDays, amount[MAX];

    scanf("%d", &NDays);

    for(i = 0; i < NDays; i++)
    {
        scanf("%d", &amount[i]);
    }
    for(i = 0; i < NDays; i++)
    {
        if(amount[i] <= 100)
        {
            printf("Roadside Food\n");
        }
        else if(amount[i] >= 250 && amount[i] <= 350)
        {
            printf("Fast Food\n");
        }
        else if(amount[i] >= 350)
        {
            printf("Kacchi\n");
        }
        else
            {
                printf("BFC\n");
            }
    }
}
