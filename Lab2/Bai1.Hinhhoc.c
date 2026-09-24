#include <stdio.h>

#define PI 3.14159

int main(){
     double dai, rong, r;

     scanf("%lf %lf %lf", &dai, &rong, &r);

    printf("Chu vi hinh chu nhat: %f\n", (dai + rong) * 2);
    printf("Dien tich hinh chu nhat: %f\n", dai * rong);
    printf("Chu vi hinh tron: %.2f\n", 2 * PI * r);
    printf("Dien tich hinh tron: %.2f\n", PI * r * r);

    return 0;
}