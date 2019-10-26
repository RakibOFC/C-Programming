#include<stdio.h>

int main()
{
    int i, size, turn = 0;
    scanf("%d", &size);
    int numbers[size];

    for(i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for(i = 1; i < size; i++)
    {
        if(numbers[i-1] > numbers[i])
        {
            turn += (numbers[i-1] - numbers[i]);
            //Or, you can also write this line. Both are same.
            //turn = turn + (numbers[i-1] - numbers[i]);
        }
    }
    printf("%d turns\n\n", turn);

    return 0;
}
