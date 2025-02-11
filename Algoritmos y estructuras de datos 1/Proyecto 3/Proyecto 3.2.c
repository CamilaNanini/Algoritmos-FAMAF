#include <stdio.h> 
#include <stdbool.h> 

int main (void){
	int x,y,z;
	bool b,w;
	
	printf("Dar x\n"); scanf("%d", &x);
	printf("Dar y\n"); scanf("%d", &y);
	printf("Dar z\n"); scanf("%d", &z);
	printf("Dar b\n"); scanf("%d", &b);
	printf("Dar w\n"); scanf("%d", &w);
	
	printf("x=%d,y=%d,z=%d,b=%d,w=%d\n",x,y,z,b,w);
	
	printf ("x %% 4 == 0 = %d \n",(x%4==0));
	
	printf ("x + y == 0 && y - x == (-1) * z = %d \n",(x+y==0) && (y-x==(-1)*z));
	
	printf ("not b && w = %d",!b&&!w);
	
	return 0;
}
// Los valores son x=0, y=0, z=0, b=1 y w=1 
