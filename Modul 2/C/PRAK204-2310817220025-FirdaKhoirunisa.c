#include<stdio.h>
#include<math.h>

void main(){
    double r, t;

    printf("Input\n");
    printf("");
    scanf("%lf %lf", &r, &t);

    double phi = 3.14286;
    double volume = phi*pow(r, 2)*t;
    double luas = 2*phi*pow(r, 2)+2*phi*r*t;
    double keliling = 2*phi*r;

    printf("\nOutput\n");
    printf("Volume = %.2lf\n", volume);
    printf("Luas = %.2lf\n", luas);
    printf("Keliling = %.2lf", keliling);
}