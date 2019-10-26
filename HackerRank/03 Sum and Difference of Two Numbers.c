#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int num, num2, sum, sub;
    float num3, num4, sum2, sub2;

    scanf("%d %d %f %f", &num, &num2, &num3, &num4);
    
    sum = num+num2;
    sub = num-num2;

    sum2 = num3+num4;
    sub2 = num3-num4;

    printf("%d %d\n%.1f %.1f", sum, sub, sum2, sub2);

    return 0;
}
