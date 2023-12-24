#include <stdio.h>
#include <stdlib.h>

int *array_copy(int *array, int length);
int main(void)
{
    int a1[] = {1,2,3,4,5};
    int a2[] = {55,34,32,12,42};
    
    int length_a1 = sizeof(a1)/ sizeof(a1[0]);
    int length_a2 = sizeof(a2)/ sizeof(a2[0]);
    
    int*a1_copy = array_copy(a1, length_a1);
    int*a2_copy = array_copy(a2, length_a2);

    for (int i = 0; i < 5; i++)
    {
        printf("a1_copy[%d]: %d\n", i, a1_copy[i]);    
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("a2_copy[%d]: %d\n", i, a2_copy[i]);    
    }
    
    free(a1_copy);
    free(a2_copy);
    
    return 0;
}

int *array_copy(int *array, int length)
{
    int *copy = malloc(length*sizeof(int));

    for (int i = 0; i < length; i++)
    {
        copy[i] = array[i];
    }
    return copy;
}