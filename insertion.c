#include <math.h> 
#include <stdio.h> 
  
/* Function to sort an array using insertion sort*/
void insertionSort(int list[], int size) 
{ 
    int pass, key, index; 
    for (pass = 1; pass < size; pass++) { 
        key = list[pass]; 
        index = pass - 1; 
  
        /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
        while (index >= 0 && list[index] > key) { 
            list[index+1]=list[index]; 
            --index; 
        } 
        list[index+1] = key; 
    } 
} 
  
// A utility function to print an array of size n 
void printArray(int list[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", list[i]); 
    printf("\n"); 
} 
  
/* Driver program to test insertion sort */
int main() 
{ 
    int list[] = { 12, 11, 13, 5, 6 }; 
    int size = sizeof(list) / sizeof(list[0]); 
  
    insertionSort(list, size); 
    printArray(list, size); 
  
    return 0; 
} 
