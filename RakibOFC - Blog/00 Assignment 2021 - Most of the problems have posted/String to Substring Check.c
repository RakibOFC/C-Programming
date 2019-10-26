#include<stdio.h>

void main()
{
    char i, j, string[50] = "rakib", sub_string[50] = "rab", is_match = 0;

    for(i = 0; sub_string[i] != '\0'; i++);
    int length = i;
    i = 0;
    j = 0;
    while(string[i] != '\0')
    {
        if(string[i] == sub_string[j])
        {
            is_match = 1;

            for(int k = 1; k < length; k++)
            {
                i++;
                j++;
                if(string[i] == sub_string[j])
                {
                    is_match = 1;
                }
                else
                {
                    is_match = 0;
                    j = 0;
                    break;
                }
            }
            if(is_match == 1)
            {
                break;
            }
        }
        else
        {
            i++;
        }
    }
    if(is_match == 1)
    {
        printf("Match Found!");
    }
    else{
        printf("No match found!");
    }
}
