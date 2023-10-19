#include<stdio.h>
#include<math.h>

void main(){
    int a,b;

    printf("Input\n");
    printf("");
    scanf("%d %d", &a, &b);

    int alas = sqrt(pow(b, 2)-pow(a, 2));
    int tinggi = a;
    int keliling = a+b+alas;
    int luas = alas*tinggi/2;

    printf("\nOutput\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm^2", luas);
}