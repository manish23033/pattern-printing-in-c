#include <stdio.h>
int main()
{
    int row, p, k = 1;
    printf("enter the no. row :  ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        p = k;
        for (int j = 1; j <= i; j++)
        {

            printf("%d", p);
            p = p - (row - i + j);
        }
        printf("\n");
        k = k + 1 + row - i;
    }
    return 0;
}