#include <stdio.h> 
 
// Function to swap two elements 
void swap(int* a, int* b) { 
    int temp = *a; 
    *a = *b;      *b = temp;        } 
 
// Function to partition the array into two sub-arrays 
int partition(int arr[], int low, int high) { 
    int j;
	int pivot = arr[high]; // Choosing the rightmost element as the pivot 
    int i = (low - 1); // Index of the smaller element 
    for ( j = low; j < high; j++) { 
        if (arr[j] < pivot) {                  i++; 
            swap(&arr[i], &arr[j]);              } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1);     } 
 
// Quick Sort algorithm 
void quickSort(int arr[], int low, int high) { 
    if (low < high) { 
        int pi = partition(arr, low, high); // Partitioning index 
        // Recursively sort elements before and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high);        } 
} 
 
// Function to print the array 
void printArray(int arr[], int size) { 
int i;
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n");     } 
 
int main() { 
    int arr[] = {10, 7, 8, 9, 1, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    printf("Given array: \n"); 
    printArray(arr, size); 
    quickSort(arr, 0, size - 1); 
    printf("Sorted array: \n"); 
    printArray(arr, size); 
    return 0;   }
    
