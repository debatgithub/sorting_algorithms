#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort_data.h"
int main(void );
void merge_sort(int source_array[], int low, int high );
void merge_list(int source_array[], int low, int mid, int high );

int main(void ) 
{
int i, j, k;
int *xptr;

    i = sizeof(unsorted_data)/sizeof(int);
    merge_sort(unsorted_data, 0, i-1);
    //i = 8;
    //merge_sort(unsorted_data, 0, i-1);
    for (j = 0; j < i; j++) {
        if ((j+1)%16 == 0)
            printf("%d\n", unsorted_data[j]);
        else
            printf("%d, ", unsorted_data[j]);
    }
    return 0;
}

void merge_sort(int source_array[], int low, int high )
{
int mid;

    if (low < high) {
        mid = low + ((high - low)/2);
        merge_sort(source_array, low, mid);
        merge_sort(source_array, mid+1, high);
        merge_list(source_array, low, mid, high );
    }
}

void merge_list(int src[], int low, int mid, int high )
{
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int * pL = (int *)malloc((n1+1) * sizeof(int));
    int * pR = (int *)malloc((n2+1) * sizeof(int));
    
    for (i = 0; i < n1; i++)
        pL[i] = src[low+i];  
    for (j = 0; j < n2; j++)
        pR[j] = src[mid+1+j];
    pL[n1] = 0x7FFFFFFF;
    pR[n2] = 0x7FFFFFFF;
    i = 0;
    j = 0;
    k = low;
    while ((i < n1) && (j < n2)) {
        if (pL[i] <= pR[j]) 
           src[k] = pL[i++];
        else 
           src[k] = pR[j++];
        k++;
    }
    while (i < n1) 
        src[k++] = pL[i++]; 
  
    while (j < n2) 
        src[k++] = pR[j++]; 

    free(pL);
    free(pR);
}

           
    
  

 
