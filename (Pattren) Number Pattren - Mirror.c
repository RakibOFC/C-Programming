#include<stdio.h>
void main()
{
    int size, i, j, k, m;
    scanf("%d", &size, printf("Enter pattren size:"));
    for(i=1; i<=size; i++)
    {
        for(m=1; m<=i; m++)
        {
            printf("%d ", m);
        }
        for(j=size-i; j>=1; j--)
        {
            printf("  ");
        }
        for(j=size-i; j>=1; j--)
        {
            printf("  ");
        }
        for(k=i; k>=1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
}
