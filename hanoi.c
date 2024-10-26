#include <stdio.h>
//i e variavel global
int i=0;
void hanoi(int n, char origem,char destino,char auxiliar){
    if(n==1){
       i++;
       printf("Passo %i: mova disco 1 de %c para %c\n",i,origem, destino);
    }
    else{
       hanoi(n-1,origem,auxiliar,destino);
       i++;
       printf("Passo %i: mova disco %i de %c para %c\n",i,n,origem,destino);
       hanoi(n-1,auxiliar,destino,origem);
    }
    return;
}
 
int main(void) {
  int x;
  char o,a,d;
  //Haste origem
  o = 'A';
  //Haste auxiliar
  a = 'B';
  //Haste destino/final
  d = 'C';
  printf("entre com o valor de n: ");
  scanf("%i", &x);
  hanoi(x,o,d,a);
  return 0;
}

