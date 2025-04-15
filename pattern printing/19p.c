#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 7; i++)
    {
        k = 1;
        for (j = 1; j <= 7; j++)
        {
            if( j == i || j == 8 - i)
                {
                    if(i==j)
                    {
                    printf("\\");
                    }
                    
                        else
                        printf("/");
               }

            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}