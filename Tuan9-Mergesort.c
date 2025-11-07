#include <stdio.h>
#include <stdlib.h>

void printArray(int a[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void merge(int a[], int l, int m, int r, int n) {
    int n1 = m-l+1;
    int n2 = r-m;

    int *L = (int*)malloc(n1*sizeof(int));
    int *R = (int*)malloc(n2*sizeof(int));

    for(int i=0; i<n1; i++) L[i] = a[l+i];
    for(int j=0; j<n2; j++) R[j] = a[m+1+j];

    int i=0, j=0, k=l;

    while(i<n1 && j<n2){
        if(L[i] <= R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];
    }
    while(i<n1) a[k++] = L[i++];
    while(j<n2) a[k++] = R[j++];

    printArray(a, n);  // In ra mỗi lần merge xong

    free(L);
    free(R);
}

void mergesort(int a[], int l, int r, int n) {
    if(l < r){
        int m = (l+r)/2;
        mergesort(a,l,m,n);
        mergesort(a,m+1,r,n);
        merge(a,l,m,r,n);
    }
}

int main() {
    int a[] = {33,10,55,71,29,3,18,92};
    int n = sizeof(a)/sizeof(a[0]);

    printf("Mergesort steps:\n");
    mergesort(a,0,n-1,n);
    printf("Final result:\n");
    printArray(a,n);
}

//Do phuc tap: O(nlogn)

