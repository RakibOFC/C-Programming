#include<stdio.h>

int main()
{
    int i, j, s, s2 = 0, x = 1, a = 5, b = 3, n = 5;

    for(i = 0; i < 1; i++)
    {
        //int a = in.nextInt();
        //int b = in.nextInt();
        //int n = in.nextInt();

        //scanf("%d %d %d", &a, &b, &n);

        for(j = 0; j < n; j++)
        {
            s = (x*b) + s2;

            printf("%d ", s+a);
            s2 = s;
            x = x*2;
        }
        //printf("\n");
    }
}
