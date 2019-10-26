#include <stdio.h>

struct name{
    char name[55];

}list[100];

int main()
{
    int i, N, num = 5, maxLength = 0, j;

    scanf("%d", &N);

    printf("Sample Input:\n");
    for(i = 0; i < N; i++)
    {
        scanf("%s", list[i].name);

        for(j = 0; list[i].name[j] != '\0'; j++);

        if(j > maxLength)
        {
            maxLength = j;
        }
    }

    printf("\nSample Output:\n");
    for(i = 0; i < N; i++)
    {
        printf("%*s\n", maxLength, list[i].name);
    }
}
