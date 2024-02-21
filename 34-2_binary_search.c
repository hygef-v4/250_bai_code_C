// C program to implement recursive Binary Search
#include <stdio.h>

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
	if (l <= r)
    	{
        	int m = l+ (r-l)/2;

        	if(x == arr[m])  return m;
        	else if(x > arr[m]) return binarySearch(arr, m+1, r, x);
        	else    return binarySearch(arr, l, m-1, x);
   	}
    return -1;
}

// Driver code
int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr, 0, n-1, x);
    
    if (result == -1)   
        printf("Element is not present in array\n");
    else 		
        printf("Element is present at index %d\n", result);
	return 0;
}
