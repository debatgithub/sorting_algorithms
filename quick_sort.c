#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort_data.h"
int main(void );
void quick_sort(int source_array[], int low, int high );
int quick_partition(int source_array[], int low, int high );
void array_print(int src[], int len );
void swap(int src[], int i, int j );


int main(void ) 
{
int i, j, k;
int *xptr;

    i = sizeof(unsorted_data)/sizeof(int);
    quick_sort(unsorted_data, 0, i-1);
    array_print(unsorted_data, i );
    return 0;
}

void quick_sort(int source_array[], int low, int high )
{
int mid;

    if (low < high) {
        mid = quick_partition(source_array, low, high);
        quick_sort(source_array, low, mid - 1);
        quick_sort(source_array, mid + 1, high);
    }

}

int quick_partition(int src[], int low, int high )
{
    int i, j, pivot, temp;

    pivot = src[high];
    i = low - 1;
    for (j = low; j <= high - 1; j++) {
        if (src[j] < pivot) {
            i++;
            swap(src, i, j );
        }
    }
    swap(src, i+1, high );
    return(i + 1);
}
    

           
void array_print(int src[], int len )
{
int j;

    for (j = 0; j < len; j++) {
        if ((j+1)%16 == 0)
            printf("%d\n", src[j]);
        else
            printf("%d, ", src[j]);
    }
    printf("\n");
}
    
  
void swap(int src[], int i, int j )
{
int temp;
    temp = src[j];
    src[j] = src[i];
    src[i] = temp;
} 
 
