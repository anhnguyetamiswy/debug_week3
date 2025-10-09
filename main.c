#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);

    // Tinh tong cac so tu 1 den n
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }
    //debugging by anhnguyet
    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);


    if (sum % 2 == 0)
        printf("Tong la so chan!\n");
    else
        printf("Tong la so le!\n");

    return 0;
}

