#include <stdio.h>
    #include <math.h>

    void bai1() {
        float diem;
        do {
             printf("Nhap diem: ");
            scanf("%f", &diem);

            if (diem < 0 || diem > 10) {
            printf("Diem so nhap vao khong hop le\n");
            } else if (diem >= 9) {
            printf("Hoc Luc: Xuat sac\n");
            } else if (diem >= 8) {
            printf("Hoc Luc: Gioi\n");
            } else if (diem >= 6.5) {
            printf("Hoc Luc: Kha\n");
            } else if (diem >= 5) {
            printf("Hoc Luc: Trung Binh\n");
            } else if (diem >= 3.5) {
            printf("Hoc Luc: Yeu\n");
            } else {
            printf("Hoc Luc: Kem\n");
            }
        }while (diem < 0 || diem > 10);   
    }
    void bai2() {
        float a, b, c;
        float delta, x, x1, x2;

        printf("Nhap a: ");
        scanf("%f", &a);

        printf("Nhap b: ");
        scanf("%f", &b);

        printf("Nhap c: ");
        scanf("%f", &c);

        if (a == 0) {
            if (b == 0) {
                if (c == 0) {
                    printf("Phuong trinh vo so nghiem.\n");
                } else {
                    printf("Phuong trinh vo nghiem.\n");
                }
            } else {
                x = -c / b;
                printf("Phuong trinh co nghiem duy nhat: x = %.2f\n", x);
            }
        } else {
            delta = b * b - 4 * a * c;

            if (delta < 0) {
                printf("Phuong trinh vo nghiem\n");
            } else if (delta == 0) {
                x = -b / (2 * a);
                printf("Phuong trinh nghiem kep: x = %.2f\n", x);
            } else {
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
            }
        }
    }

    void bai3() {
        float kwh;
        float tien = 0;

        do {
            printf("Nhap so kwh tieu thu: ");
            scanf("%f", &kwh);

            if (kwh < 0) {
                printf("So kwh tieu thu khong hop le\n");
            }
        } while (kwh < 0);

        if (kwh <= 50) {
            tien = kwh * 1678;
        } else if (kwh <= 100) {
            tien = 50 * 1678 + (kwh - 50) * 1734;
        } else if (kwh <= 200) {
            tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
        } else if (kwh <= 300) {
            tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
        } else if (kwh <= 400) {
            tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
        } else {
            tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
        }

        printf("Tien dien: %.0f VND\nDien Tieu Thu: %.0f kwh\n", tien, kwh);
    }

    int main(void) {
        int chon;

        do {
            printf("=====MENU CHUONG TRINH LAB3=====\n");
printf("1. Tinh hoc luc sinh vien\n");
            printf("2. Giai phuong trinh bac 2\n");
            printf("3. Tinh tien tieu thu\n");
            printf("0. Thoat Chuong Trinh\n");
            printf("=================================\n");
            printf("Nhap lua chon cua ban: ");
            scanf("%d", &chon);

            switch (chon) {
                case 1:
                    bai1();
                    break;
                case 2:
                    bai2();
                    break;
                case 3:
                    bai3();
                    break;
                case 0:
                    printf("Thoat Chuong Trinh\n");
                    break;
                default:
                    printf("Lua chon khong hop le ban phai chon tu 0 den 3\n");
                    break;
            }
        } while (chon != 0);

        return 0;
    }
