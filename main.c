#include <stdio.h>

void bubbleSort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        printf("\nVong lap thu %d:\n", i + 1);
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            // In mang sau moi lan so sanh6
            for (int k = 0; k < n; k++)
                printf("%d ", a[k]);
            printf("\n");
        }
    }
}

int main() {
    int n, a[100];
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    bubbleSort(a, n);
    printf("\nMang sau khi sap xep: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
