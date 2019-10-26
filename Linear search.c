#include<stdio.h>
void main()
{
    int a[100], size, i, num, isFound = 0, loc;
    
    printf("Enter array size: ");
    
    scanf("%d", &size);
    
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter a number for search: ");
    
    scanf("%d", &num);
    
    for(i = 0; i < size; i++)
    {
        if(num == a[i])
        {
            isFound = 1;
            loc = i;
        }
    }
    if(isFound == 1)
    {
        printf("Found and Location is: a[%d]\n", loc);
    }
    else
    {
        printf("Not found");
    }
}