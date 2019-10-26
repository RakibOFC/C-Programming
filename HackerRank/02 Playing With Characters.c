#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch, s[30], sen[50];

    scanf("%c %s", &ch, s);
    scanf("\n");
    scanf("%[^\n]*%c", sen);

    printf("%c\n%s\n%s", ch, s, sen);
}