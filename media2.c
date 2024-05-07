#include <stdio.h>
 
int main(void) {
  int x,y;
  float z;
  scanf("%d %d", &x ,&y);
  z=(x+y);
  z=z/2;
  printf("O resultado é: %f\n", z);
 
  return 0;
}



//para compilar: gcc -o media2 media2.c
//para executar ./media2
