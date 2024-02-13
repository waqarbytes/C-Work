#include <stdio.h>

void swap(int *up, int *down) {
    int element = *up;
    *up = *down;
    *down = element;
}

void selectionSort(int arr[], int n) {
   int i, j, slide;

   for (i = 0; i < n-1; i++) {
       slide = i;
       for (j = i+1; j < n; j++)
         if (arr[j] < arr[slide])
            slide = j;

       swap(&arr[slide], &arr[i]);
   }
}

void printArray(int arr[], int size) {
   int i;
   for (i=0; i < size; i++)
       printf("%d ", arr[i]);
   printf("\n");
}

int main() {
   int arr[] = {64, 34, 25, 12, 22, 11, 90};               
   int n = sizeof(arr)/sizeof(arr[0]);
   selectionSort(arr, n);
   printf("Sorted array: \n");
   printArray(arr, n);
   return 0;
}