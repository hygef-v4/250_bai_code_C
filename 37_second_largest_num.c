#include <stdio.h>
#include <limits.h>

int sec_largest(int arr[], int n);

int main(void) 
{
    int array[] = {10,10,10,10,9,56,43};
    int length = sizeof(array) / sizeof(array[0]);

    int result = sec_largest(array, length);
    if(result == INT_MIN)
    {
      printf("There is no second largest!\n");
    }
    else{
      printf("Second largest integer: %d", result);
    }
    

    return 0;
}
int sec_largest(int arr[], int n)
{
    int max = INT_MIN; // negative infinite number
    int second_max = INT_MIN;   //3,6,5,2,9,56,43,56     
                                //max: 56    sec_max : 43
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        // if max2 < arr[i] < max 
        else if(arr[i] > second_max && arr[i] < max)
        {
            second_max = arr[i];
        }
    }

    return second_max;
}
