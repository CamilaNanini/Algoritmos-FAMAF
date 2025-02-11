#include <stdio.h>
#include <assert.h>

int main (void){
    int x,y,X,Y;
    printf("Ingrese x\n"); scanf("%d",&x); 
    printf("Ingrese y\n"); scanf("%d",&y); 
    X=x; Y=y;
 assert(x == X && y == Y);
  x= x + 1;
  y=X+y;
   printf("Los valores finales son x=%d y=%d \n",x,y);
 assert( x==X+1 && y == X + Y); 
    return 0;
}
