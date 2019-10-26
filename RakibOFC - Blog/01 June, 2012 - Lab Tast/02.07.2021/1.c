//Question 1.
#include<stdio.h>
#include<math.h>
int main()
{
    float N, fp, fl, fi, fc;
    int R, ne, L;

    printf("Enter R, F(p), n(e), f(l), f(i), f(c): ");
    scanf("%d %f %d %f %f %f %d", &R, &fp, &ne, &fl, &fi, &fc, &L); //Input: 5 0.25 20 0.2 0.15 0.11 150

    float n = (float)R*ne*L;
    N = n*fp*fl*fi*fc;

    printf("The number of communicative civilizations within the Milky Way today: %.3f\n\n", N);

    return 0;
}
