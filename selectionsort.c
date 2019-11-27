#include <stdio.h> 
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int list[], int size) 
{ 
    int pass, index, min; 
  
    // One by one move boundary of unsorted subarray 
    for (pass = 0; pass < size-1; pass++) 
    { 
        // Find the minimum element in unsorted array 
        min = pass; 
        for (index = pass+1; index<size; index++) 
          if (list[index] < list[min]) 
            min = index; 
  
        // Swap the found minimum element with the first element 
        swap(&list[min], &list[pass]); 
    } 
} 
  
/* Function to print an array */
void printArray(int list[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", list[i]); 
    printf("\n"); 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int list[] = {64, 25, 12, 22, 11}; 
    int size = sizeof(list)/sizeof(list[0]); 
    selectionSort(list, size); 
    printf("Sorted array: \n"); 
    printArray(list, size); 
    return 0; 
} 
