#include <stdio.h>

int main(){
    float toan, ly, anh;
    float diem_trung_binh;

    printf("Nhap diem mon toan: ");
    scanf("%f", &toan);
    printf("Nhap diem mon ly: ");
    scanf("%f", &ly);
    printf("Nhap diem mon anh: ");
    scanf("%f", &anh);

    diem_trung_binh = (float)(toan * 3 + ly * 2 + anh * 1) / 6;
    
    printf("Diem trung binh: %.2f\n", diem_trung_binh);

    return 0;
}