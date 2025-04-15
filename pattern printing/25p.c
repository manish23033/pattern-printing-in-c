#include<stdio.h>
int main()
{
    int i , j ;
    char k;
    for(i = 1 ; i<=4 ;i++)
    {
        
        for(j=1;j<=7;j++)
        {
        
            if(j>=5-i && j<=8-i)
            
            printf("*");
            
        
            else
            printf(" ");
        }
        printf("\n");

    }
    return 0;
}