#include <stdio.h>
int main()
{
    int k = 1;
    for (int i = 1; i <= 5; i++)
    {
        int flag=1;
     
        for (int j = 1; j <= 9; j++)
        {
            if (j<=2*i-1){
                if(flag  ==1)
                printf("%d",k++);
                else
                printf("*");
                flag=1-flag;
             
            }
            else

                printf("  ");
        }
        printf("\n");
    }
    return 0;
}