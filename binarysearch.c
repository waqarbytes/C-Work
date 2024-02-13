#include<stdio.h>

int binarySearch(int arr[], int low, int high, int element){
    while(low<=high){
          int mid=low + (high - low) / 2;
       if(arr[mid] == element)
       return mid;

       if(arr[mid]<element)
       low=mid+1;
       else  
       high=mid-1;
    }
    return -1;
}
 int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr) / sizeof (arr[0]);

    int element=8;
    int result=binarySearch(arr,0,n-1,element);

    if(result == -1)
    printf("Element %d is not present in the array\n",element);
    else
    printf("Element %d is present at index %d\n",element,result);

    return 0;

    
 }