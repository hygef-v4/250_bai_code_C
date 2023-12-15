#include <stdio.h>
int fib_2(int n);

int main() {
    int term_1 = 0;
    int term_2 = 1;
    int fib;
    int length;
    
    do {
        printf("Enter the length\n");
        scanf("%d", &length);
        if (length < 3)
        {
            printf("Length must > 3\n");
        }
    } while (length < 3); 
                                                   // Interative solution//
    printf("Interative solution");
    
    printf("\n%d,%d", term_1, term_2);
    
    
    for (int i = 2; i < length; i++)
    {
        fib = term_1 + term_2;
        printf(",%d", fib);
        // 0,1,1,2
        term_1 = term_2;
        term_2 = fib;
    }
                                                 // Recursive solution//
    printf("\nRecursive solution\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d", fib_2(i));
    
        if (i != length - 1)
        {
            printf(",");
        }
        else
        {
            printf("\n");
        }
    }       
            }

    int fib_2(int n)
    {
        if (n > 1)
        {
            return fib_2(n-1) + fib_2(n-2);
        }
    
        else if (n == 1)
        {
            return 1;
        }
        else if (n == 0)
        {
            return 0;
        }
        else{
            printf("n must be >= 0");
            return -1; 
        }
    }
            
