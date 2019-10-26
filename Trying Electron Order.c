#include<stdio.h>
#include<math.h>

int main()
{
    int n, j, protonNum = 100, sell = 2;

    for(n = 1; sell <= protonNum; n++)
    {
        /*
        1^2 = 1*1
        2^2 = 2*2
        3^2 = 3*3
        4^2 = 4*4
        */
        sell = 2 * pow(n, 2);
        printf("%d ", sell);
        printf("%d\n", n);
    }
    printf("\n\n");
}
