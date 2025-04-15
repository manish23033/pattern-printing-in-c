#include <stdio.h>
int main()
{
    int k, line, x = 1;
    char y;
    printf("enter the no.. Line : ");
    scanf("%d", &line);
    for (int i = 1; i <= line; i++)
    {
        k = 1;
        x = 1;
        y = 'A';
        for (int j = 1; j <= 2 * line - 1; j++)
        {
            if (j >= line + 1 - i && j <= line - 1 + i)
            {
                if (k)
                {
                    if (i % 2 == 1)
                        printf("%d", x++);

                    else
                        printf("%c", y++);
                }
                else
                    printf(" ");
                k = 1 - k;
            }
            else

                printf(" ");
        }
        printf("\n");
    }
    return 0;
}