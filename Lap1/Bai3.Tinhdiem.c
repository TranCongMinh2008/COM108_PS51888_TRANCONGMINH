#include <stdio.h>

int main(){
    char mssv[] = "PS51888";
    char hoTen[] = "Tran Cong Minh";

    float diemToan = 9.0;
    float diemLy = 8.0;
    float diemHoa = 7.0;

    float diemTB = (diemToan * 2 + diemLy + diemHoa) / 4;

    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho va ten: %s\n", hoTen);
    printf("Diem trung binh: %.2f\n", diemTB);

    return 0;
}