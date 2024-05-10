#include <stdio.h>
 
int main(void) {
  int x,y,z;
  scanf("%d %d", &x ,&y);
  z=x+y;
  printf("A soma é: %d\n", z);
  z=x*y;
  printf("O produto é: %d\n", z);
 
  return 0;
}



//para compilar: gcc -o ex12 ex12.c
//para executar ./ex12
