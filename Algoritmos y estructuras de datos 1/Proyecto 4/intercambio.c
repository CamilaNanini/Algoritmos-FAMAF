#include <stdio.h>
#include <assert.h>

int main (void){
    int x,y,z;
    printf("Ingrese x\n"); scanf("%d",&x); 
    printf("Ingrese y\n"); scanf("%d",&y); 
 assert((x>=0 || x<0) && (y>=0 || y<0));
  z=x;
  x=y;
  y=z;
   printf("Los valores finales son x=%d y=%d \n",x,y);
 assert(y==z); 
    return 0;
}