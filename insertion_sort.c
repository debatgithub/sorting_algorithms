#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort_data.h"
int main(void );
void insertion_sort(int source_array[], int total );
void array_print(int source_array[], int total );


int main(void ) 
{
int i, j, k;
int *xptr;

    i = sizeof(unsorted_data)/sizeof(int);
    insertion_sort(unsorted_data, i );
    array_print(unsorted_data, i );
    return 0;
}

void insertion_sort(int src[], int total )
{
int i, j;
int key;

    for (j = 1; j < total; j++) {
        key = src[j];
        i = j-1;
        while ((i >= 0) && (src[i] > key )) {
            src[i+1] = src[i];
            i--;
        }
        src[i+1] = key;
    }
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
 
    
  

 
