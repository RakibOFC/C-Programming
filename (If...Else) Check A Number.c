#include<stdio.h>
int main()
{
    /* Solve this 1<i<10 */

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 1 && num < 10)
    {
        printf("1 < %d < 10 is true.\n", num);
    }
    else
    {
        printf("1 < %d < 10 is not true.\n", num);
    }
    return 0;
}
