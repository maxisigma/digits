#include <stdio.h>

int main()
{
	int a;
	int b;
	printf("Introduzca 2 numeros, ambos del 0 al 9: \n");
	scanf("%d%d", &a, &b);
	printf("\nLos numeros introducidos fueron: %d y %d",a,b);
	if(a > 9 || b > 9) {
		printf("\nLos numeros introducidos no son validos, introduzca dos numeros del 0 al 9");
	} else if(a == b) {
		printf("\nEl numero mas grande con los dos digitos de los numeros introducidos es: %d%d",a,a);
	} else if(a > b) {
		printf("\nEl numero mas grande con los dos digitos de los numeros introducidos es: %d%d",a,b);
	} else if(a < b) {
		printf("\nEl numero mas grande con los dos digitos de los numeros introducidos es: %d%d",b,a);
	}
	return 0;
}
