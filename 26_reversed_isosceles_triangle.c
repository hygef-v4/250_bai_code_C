#include <stdio.h>

int main(void)
{   
    int n;
    do
    {
        printf ("Enter integer n: \n");
        scanf("%d", &n);
    } while ( n<=0 );
    int w = 0; 
    for (int i = n; i > 0; i--)
    {
        for (int k = 0; k < w; k++)
        {
            printf(" ");
        }
        w += 1;
        for (int j = 0; j < i * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
