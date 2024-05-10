#include <stdio.h>
 
int main(void) {
  float x,y,z,w;
  scanf("%f %f %f", &x ,&y, &z);
  w=x+y+z;
  printf("A soma é: %f\n", w);
  w=x*y*z;
  printf("O produto é: %f\n", w);
 
  return 0;
}



//para compilar: gcc -o ex34 ex34.c
//para executar ./ex34
