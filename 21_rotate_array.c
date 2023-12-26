#include <stdio.h>
void rotate_left(int array[], int length);
void rotate_right(int array[], int length);
int main(void)
{
    int a1[] = {1,2,3,4,5,6};
            // 2 3 4 5 6 1
            //   temp = a0   a0 = a1 
    //rotate_left(a1, 6);
    rotate_right(a1, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("a1[%d]: %d\n", i, a1[i]);
    }

    return 0;
}
void rotate_left(int array[], int length)
{
    int temp;
    temp = array[0];
    for (int i = 0; i < (length-1); i++)
    {
        array[i] = array[i+1];
        
    }
    array[length - 1] = temp;
}
void rotate_right(int array[], int length)
{   
    // 1 2 3 4 5 6
    // 6 1 2 3 4 5 
    // reversed loop    temp = a[length -1]
    int end_index = length-1;  // 5
    int temp = array[end_index];
    for (int i = end_index; i >= 0; i--)
    {
        if(end_index != 0)
        {
            array[end_index] = array[end_index - 1];
            end_index --;  
        }
        
    }
    array[0] = temp;
    
    
}
// if we wanna rotate n time just use other function loop through n time of rotate once!