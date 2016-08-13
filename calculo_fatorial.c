#include<stdio.h>

int main (void)

{
	unsigned int i;
	unsigned int n;
	unsigned int Resultado = 1;
	
	printf ("Entre com um numero (inteiro positivo)!\n");
	
	scanf ("%i", &n);
	
	for (i=0; i<n; i++)
	{
		printf ("\n= %i", Resultado);
		Resultado = Resultado * (n - i);
		printf("\nresultado = %i", Resultado);
	}
	
	printf ("\nO resultado eh: %i", Resultado);
}


