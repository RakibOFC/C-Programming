#include<stdio.h>
#include<math.h>
void main()
{
    int a, b, c;
    float x1, x2, root;

    /**
    * a^2 - 5a + 6
    * a^2 - 3a - 2a + 6
    * a(a - 3) - 2(a - 3)
    * a = 3, 2
    */

    printf("Find all roots of a quadratic equation.\n\n");

    scanf("%d", &a, printf("\nValue of a: "));
    scanf("%d", &b, printf("\nValue of b: "));
    scanf("%d", &c, printf("\nValue of c: "));

    root = sqrt(pow(b, 2) - (4 * a * c));
    x1 = (- b + root) / (2 * a);
    x2 = (- b - root) / (2 * a);

    printf("\nx1 = %f\nx2 = %f", x1, x2);
}
