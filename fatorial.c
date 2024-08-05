#include <stdio.h>
int main(void) {
  int x,i,f;
  scanf("%d", &x);
  f=1;
  for (i=1;i<=x;i++){
  f=f*i;
}
  printf("O valor do fatorial é %d\n",f);
  return 0;
}


  
