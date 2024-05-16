/*Calculo de serie de Fibonacci de N, usando recursividad*/

#include "stdio.h"
unsigned int Fibonacci (unsigned int n);


int main ()
{
	unsigned int N,n,Fn;
	printf("\nEscribe el numero de elementos: ");
	scanf("%u",&N);

	n = 1; // con esta inicialización empezamos la serie en 1


	while (n<=N) // tiene que ser <= porque sin el = la serie imprime un elemento menos
	{
		Fn = Fibonacci (n); //llamada a  función Fibonacci
		printf("%i, ",Fn );
		n += 1;
	}

    return 0;
}

unsigned int Fibonacci (unsigned int n)
{
	unsigned int Fn;
	if (n == 1) return 1; //una función al encontrar return ahí termina
	if (n == 0) return 0;
	Fn = Fibonacci (n-1) + Fibonacci (n-2);
	return Fn;
}
