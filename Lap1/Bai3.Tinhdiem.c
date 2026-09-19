#include <stdio.h>

int main(){
    char mssv[] = "PS51888";
    char hoTen[] = "Tran Cong Minh";

    float diemToan =   8.5;
    float diemLy =     7.5;
    float diemHoa =    6.5;

    float  diemTB = (diemToan * 2 + diemLy + diemHoa) / 4;
    
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho va ten: %s\n", hoTen);
    printf("Diem Trung Binh: %.2f\n", diemTB);
    
    return 0;
}