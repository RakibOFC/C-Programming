#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, lastDigit, sum = 0;
    scanf("%d", &n);
    while(n > 0)
    {
        lastDigit = n%10;
        n /= 10;
        sum += lastDigit;
    }
    printf("%d\n", sum);
    return 0;
}