
#include <stdio.h>
int binary_search(int arr[], int data, int n)
{
    int l, r, mid;
    l = 0;
    r = n - 1;   

    while (l <= r)
    {
        mid = (l + r) / 2;
        if ( data == arr[mid])
        {
            return mid;
        }
          if (data < arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            l= mid + 1;
        }
    }
    return -1;
}

int main()

{
    int arr [] = {7,8,9,11,12,13};
    
    int n = sizeof (arr) / sizeof(int);
    
    int data=11;
    

    int index = binary_search(arr,data,n);
    
        printf("element is found at index is: %d" , index);
    
        
}

