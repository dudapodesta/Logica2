#include <stdio.h>
 
int main(void) {
  int x,y;
  float z;
  scanf("%i", &x);
  scanf("%i", &y);
  z=(x+y);
  z=z/2;
  printf("O resultado é: %f\n", z);
 
  return 0;
}



//para compilar: gcc -o media media.c
//para executar ./media
