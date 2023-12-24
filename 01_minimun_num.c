#include <stdio.h>

int find_min(int array[], int length);
int main()
{
    int myarray[] = {98,5,3,22,4,7,2};
    int array_length = sizeof(myarray) / sizeof(myarray[0]);
   
   int min = find_min(myarray, array_length);
   
   printf("the min is %d", min);
    
    return 0;
}

int find_min(int array[], int length)
{
    int min = array[0];
    
    for (int i = 1; i < length; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
        return min;
}