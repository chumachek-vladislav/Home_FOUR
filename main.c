
#include <locale.h> //dz_lab_4, variant 7
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

void main() { 
    setlocale(LC_CTYPE, "");
   
    double x = 0.1722;
    double y = 6.33;
    double z = 0.000325;  

    double arctg = atan(x);
    double arccos = acos(x);
    double m = fabs(x-y);
    double chisl = x+3*m+x*x;
    double znam = m*z+x*x;
    double DDrob = chisl/znam;
    double A = (1.0/4.0)*arccos*DDrob;
    double B = 5*arctg;
    double otvet = B-A;

    printf("Исходные значения:\n");
    printf("x=%f\n", x);
    printf("y=%f\n", y);
    printf("z=%f\n\n", z);
    printf("Промежуточные вычисления:\n");
    printf("arctg(x) = %f\n", arctg);
    printf("arccos(x) = %f\n", arccos);
    printf("|x - y| = %f\n", m);
    printf("Числитель = %f\n", chisl);
    printf("Знаменатель = %f\n", znam);
    printf("Дробь = %f\n\n", DDrob);
    printf("Ответ:\n");
    printf("%f\n", otvet);

    return 0;
}