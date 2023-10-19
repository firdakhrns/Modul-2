#include<stdio.h>

void main(){
    float satu, dua;
    printf("Input\n");
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &satu);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &dua);
    float hasil = (satu+dua);

    printf("\nOutput\n");
    printf("Hasil dari penjumlahan nilai pertama %g dan kedua %g adalah %.2f", satu, dua, hasil);
}