#include<stdio.h>
#include<stdbool.h>
#define N 3
typedef char clave_t;
typedef int valor_t;
struct asoc {
clave_t clave;
valor_t valor;
};

bool asoc_existe(struct asoc a[], int tam, clave_t c){
int i=0;
bool res=0;
while (i<tam){
 res= res || a[i].clave == c;
 i=i+1;
}
   return res;
}

int main (void){
int i=0;
struct asoc aux[N];
clave_t c;
bool res;
while (i<N){
    printf("Clave para %d\n",i);
    scanf("%s",&aux[i].clave);
    printf("Valor para %d\n",i);
    scanf("%d",&aux[i].valor);
    printf("\n");
    i=i+1;
}
printf ("Introduzca clave a comparar\n");
scanf("%s",&c);
res=asoc_existe(aux,N,c);
if (res==true){
printf("Si existe esa clave");
} 
else{
printf("No existe esa clave");
}
    return 0;
}