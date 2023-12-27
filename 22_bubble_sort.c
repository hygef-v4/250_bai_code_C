#include <stdio.h>
void bubble_sort(int array[], int length);
int main(void)
{
    int a[] = {4,3,2,6,1,0,7,5,9,8};
    bubble_sort(a, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("a[%d]: %d\n", i, a[i]);
    }
    return 0;
}

void bubble_sort(int array[], int length)
{   
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    } 

}