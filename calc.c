#include <stdio.h>
int main(void) {
  float x,y;
  char o;
  scanf("%f %c %f", &x,&o,&y);
  switch (o){
     case '+':
       x+=y;
       printf("%f\n",x);
       break;
     case '-':
       x-=y;
       printf("%f\n",x);
       break;
    case '*':
       x*=y;
       printf("%f\n",x);
       break;
   case '/':
       x=x/y;
       printf("%f\n",x);
       break;
    default:
       printf("?\n");
   }
  return 0;
}
