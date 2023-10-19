#include<stdio.h>

void main(){
    float a, b, i, j, x, y;
    
    printf("Input\n");
    printf("");
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);
    float hasil = (a-b)*(i/j)-(x+y);

    printf("\nOutput\n");
    printf("%.3f", hasil);
}