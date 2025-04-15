#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        char k=64+i;
        for (int j = 1; j <= 4; j++)
        {
            if (j<=i){
                printf("%c",k--);
             
            }
            else

                printf("  ");
        }
        printf("\n");
    }
    return 0;
}