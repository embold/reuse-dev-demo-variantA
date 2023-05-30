#include <stdio.h>
#include <stdbool.h>

int process(int param)
{
    return 0;
}

void swapArr(float *ptr1, float *ptr2 ) 
{
    float temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
 
        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == false)
            break;
    }
}