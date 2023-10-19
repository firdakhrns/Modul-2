#include<stdio.h>

int main(){
    char nama[20], nim[20], kelas[10], ttl[30], alamat[30], hobby[20], no[20];

    printf("Input\n");
    printf("Nama                 :");
    gets(nama);
    printf("NIM                  :");
    gets(nim);
    printf("Kelas Paralel        :");
    gets(kelas);
    printf("Tempat/Tanggal Lahir :");
    gets(ttl);
    printf("Alamat               :");
    gets(alamat);
    printf("Hobby                :");
    gets(hobby);
    printf("No. HP               :");
    gets(no);

    printf("\nOutput\n");
    printf("Nama                 : %s\n", nama);
    printf("NIM                  : %s\n", nim);
    printf("Kelas Paralel        : %s\n", kelas);
    printf("Tempat/Tanggal Lahir : %s\n", ttl);
    printf("Alamat               : %s\n", alamat);
    printf("Hobby                : %s\n", hobby);
    printf("No. HP               : %s\n", no);
}