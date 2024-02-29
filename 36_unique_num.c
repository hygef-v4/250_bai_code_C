#include <stdio.h>

void unique(int arr[], int n);

int main(void) 
{
    int array[] = {1,5,4,1,4,5,7,4,2,4,5,6,5,4,6,8};
    int length = sizeof(array) / sizeof(array[0]);
    unique(array, length);
    return 0;
}
void unique(int arr[], int n) 
{
    printf("Unique elements in the array are: ");
    int i,j;
    
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++)   
        {
            // so sanh tung phan tu neu giong nhau -> break loop
            
            if (i != j && arr[i] == arr[j])
                break;
        }
        // neu khac nhau thi se loop duoc den cuoi array -> unique number
        if (j == n)
            printf("%d ", arr[i]);
    }
    printf("\n");
}