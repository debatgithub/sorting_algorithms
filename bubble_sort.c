#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort_data.h"
int main(void );
void bubble_sort(int source_array[], int len );
void array_print(int src[], int len );
void swap(int src[], int i, int j );


int main(void ) 
{
int i, j, k;
int *xptr;

    i = sizeof(unsorted_data)/sizeof(int);
    bubble_sort(unsorted_data, i );
    array_print(unsorted_data, i );
    return 0;
}

void bubble_sort(int source_array[], int len )
{
int i, j;  

    for (i = 0; i < len-1; i++) {      
        // Last i elements are already in place  
        for (j = 0; j < len-i-1; j++) {  
            if (source_array[j] > source_array[j+1])  
                swap(source_array, j, j+1);
        }
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
 
