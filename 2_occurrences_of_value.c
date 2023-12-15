#include <stdio.h>

int occurrences( int array[], int length, int to_find);

int main()
{
    int myarray1[] = {1,2,3,4,5,6,1,1,2,2,3,4,5};
    int length = sizeof(myarray1) / sizeof(myarray1[0]);
    
    int o1 = occurrences(myarray1, length, 6);
    
    printf("Occurences of 6 is %d", o1);
    return 0;
}

int occurrences(int array[], int length, int to_find)
{
    int count = 0;
    
    for (int i = 0; i < length; i++)
    {
        if (array[i] == to_find) count++; //note1
    }
    
    return count;
}