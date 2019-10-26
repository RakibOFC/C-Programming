#include <stdio.h>

int main()
{
    int h, w, height, width;

    printf("Enter height: ");
    scanf("%d",&height);

    printf("Enter width: ");
    scanf("%d",&width);

    for(h = 1; h <= height; h++)
    {
        for(w = 1; w <= width; w++)
        {
            if(h == 1 || h == height || w == 1 || w == width)
            {
                printf("X");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
