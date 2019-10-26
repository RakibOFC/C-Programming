#include <stdio.h>

int main()
{
    int num, num2, i, j, binary, binary2, numClone, numClone2, remainder = 0, sum[20];;
    binary = binary2 = 0;

    printf("Enter first number: ");
    scanf("%d",&num);

    printf("Enter second number: ");
    scanf("%d",&num2);

    numClone = num;
    numClone2 = num2;
    i = 1;

    for(j = num; j > 0; j = j/2)
    {
        binary = binary + (num %2 )*i;
        i = i * 10;
        num = num / 2;
    }
    i = 1;

    for(j = num2; j > 0; j = j/2)
    {
        binary2 = binary2 + (num2 % 2 )*i;
        i = i * 10;
        num2 = num2 / 2;
    }

    printf("\nThe Binary of %d is %d.\n\n", numClone, binary);
    printf("\nThe Binary of %d is %d.\n\n", numClone2, binary2);

    i = 0;

    while (binary != 0 || binary2 != 0)
    {
        sum[i++] =(binary % 10 + binary2 % 10 + remainder) % 2;
        remainder =(binary % 10 + binary2 % 10 + remainder) / 2;
        binary = binary / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    printf("R = ");
    while (i >= 0)
        printf("%d", sum[i--]);
    return 0;
}
