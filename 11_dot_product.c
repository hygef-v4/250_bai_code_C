// dot product example
//
//  v1 = (2, 5, 4)
//  v2 = (3, 2, 1)
//  r = (2 * 3) + (5 * 2) + (4 * 1) = 20 
#include <stdio.h>

double dot_product(double v1[], double v2[],int length);
int main(void)
{
    double v1[] = {2, 5, 4};
    double v2[] = {3, 2, 1};
    

    double result1 = dot_product(v1,v2,3);
    printf("Result is %.2f", result1);
    
    return 0;
}
double dot_product(double v1[], double v2[],int length)
{
    double result = 0;
    
    for (int i = 0; i < length; i++)
    {
        result += v1[i] * v2[i];
    } 
    return result;
}