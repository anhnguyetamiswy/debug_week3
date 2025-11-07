#include <stdio.h>

void printArray(int a[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

int partition(int a[], int low, int high, int n) {
    int pivot = a[high];
    int i = low - 1;

    for(int j = low; j < high; j++) {
        if(a[j] <= pivot) {
            i++;
            swap(&a[i], &a[j]);
            printArray(a, n);   // In sau mỗi lần swap
        }
    }
    swap(&a[i+1], &a[high]);
    printArray(a, n);           // In pivot về đúng vị trí
    return i+1;
}

void quicksort(int a[], int low, int high, int n) {
    if(low < high) {
        int p = partition(a, low, high, n);
        quicksort(a, low, p-1, n);
        quicksort(a, p+1, high, n);
    }
}

int main() {
    int a[] = {33,10,55,71,29,3,18,92};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Quicksort steps:\n");
    quicksort(a,0,n-1,n);
    printf("Final result:\n");
    printArray(a,n);
}
