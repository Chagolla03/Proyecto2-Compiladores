/* Apuntadores*/

#include <stdio.h>

int main()
{
	char Cadena[20] = {"__________"};
	int dato1 =255;
	float x = 2.5;
    	char Caracter = 'A';
    	int *ptr;
    	float *pointer;
    	char *p;

    p = &Cadena[0];
    printf("p asignando &Cadena[0] = %p",p);
    p = Cadena;
    printf("\np aignando el nombre del arreglo Cadena = %p",p);

    *p = 'A';
    for(int k=0; k<5; k++)
    	printf("\n[dir: %p]Cadena[%i]=",&Cadena[k],k); 

    printf("\nGenerando direcciones a partir del apuntador p:");
    for(int k=0; k<5; k++)
    	printf("\np+%i = %p",k,p+k); 

    
	return 0;
}
