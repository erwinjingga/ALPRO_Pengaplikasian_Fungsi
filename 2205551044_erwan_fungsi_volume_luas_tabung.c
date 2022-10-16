#include <stdio.h>
int main(){
    printf("------------------------------------------\n");
    printf(" ----------------------------------------\n");
    printf(" Program C Untuk Menghitung Volume Tabung\n");
    printf(" ----------------------------------------\n");
    printf("------------------------------------------\n");
  
  const float PI = 3.14159; // define constant pi = 3.14
  float v, l, r, t; // init variable
  
  printf("Masukkan jari-jari dari tabung \t: ");
  scanf("%f", &r);
  printf("Masukkan tinggi dari tabung \t: ");
  scanf("%f", &t);
  v = PI * r * r * t; // rumus volume tabung
  l=(2*PI*r*(r+t)); // rumus luas tabung
  printf("----------------------------------------\n");
  printf("Hasil perhitungan volume tabung adalah %.2f", v);
  printf("Hasil perhitungan luas tabung adalah %.2f", l);
  printf("\n\n\n");
  return 0;
}
