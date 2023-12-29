#include <stdio.h>
#include <ctype.h>
int main (void)
{
    int n; 
    do
    {
        printf ("Enter integer n: \n");
        scanf("%d", &n);
    } while ( n<=0 );
    
    for (int i = 1; i <= n; i++)
    {
        for ( int j = 1; j <= n - i; j++)
        {
            printf (" ");
        }
        
        for (int k = 1; k <= i*2 - 1 ; k++)
        {
            printf("*");
        }
        printf ("\n");
    }
    return 0;
}