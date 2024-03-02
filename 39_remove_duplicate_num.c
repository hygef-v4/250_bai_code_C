#include <stdio.h>

int main() {
  /*Input: 8
  1 4 2 5 6 2 4 4
  Output: 1 4 2 5 6*/
    int n, i, j;
    scanf("%d", &n);
    int array[1000];
    
    // Input array
    for (i = 0; i < n; i++)	
        scanf("%d", &array[i]);

    // Remove duplicates
    for (i = 0; i < n; i++) 
	{
        for (j = i + 1; j < n; j++) 
		{
            if (array[i] == array[j]) 
			{
                int k;
                for (k = j; k < n - 1; k++)	
                {
                	array[k] = array[k + 1];	
				}
                    
                n--; // Decrease array size
                j--;  // for j ++       
                
            } 
			
        }
    }

    // Output array without duplicates
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);

    return 0;
}
