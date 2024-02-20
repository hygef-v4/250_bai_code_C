#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/* Input: 4
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 */
int main() 
{
    int n;
    printf("Input: ");
    scanf("%d", &n);

    int size = 2 * n - 1;
    int array[size][size];

    int start = 0;
    int end = size - 1;
    int val = n;

    while (start <= end)
    {
        for (int i = start; i <= end; i++)
        {
            for (int j = start; j <= end; j++)
            {
                if (i == start || i == end || j == start || j == end)
                    array[i][j] = val;
            }
        }
        ++start;
        --end;
        --val;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
