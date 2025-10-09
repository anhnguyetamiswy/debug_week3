#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
    struct SinhVien {
    int mssv;
    char hoTen[50];
    double diemTB;
    };
    int main() {
    //struct SinhVien sv1 = { 1234, "Nguyen Van A", 8.0};
    struct SinhVien sv2;
    ptintf("\n hay nhap thong tin sinh vien 2");
    printf("\n Hay nhap ho ten sinh vien 2: ");
    fgets(sv2.hoTen, 50, stdin);
    printf("\n Hay nhap mssv: ");
    scanf("%d", &sv2.mssv);
    printf("\n Hay nhap diem trung binh: ");
    scanf("%lf", &sv2.diemTB);
    return 0;
    }


