#include <stdio.h>
int main(void) {
  int x;
  scanf("%d", &x);
  x=x%2;
  switch (x){
     case 0:
       printf("par\n");
       break;
     case 1:
       printf("impar\n");
       break;
    default:
       printf("?\n");
   }
  return 0;
}
