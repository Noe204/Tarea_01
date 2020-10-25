#include <stdio.h>
int main(){
float a,b;
	printf("Introduzca un valor \"a\" (puede ser con un punto decimal): ");
	scanf("%f",&a); /*se lee valor */
	printf("Introduzca un valor \"b\": ");
	scanf("%f",&b); /*se lee valor b */
		if(a<b){  /* primer condicion*/
			printf("La variable mayor es \"b\" con valor de: %.1f",b);
		}
		else if(b<a){  /*segunda condicion */
			printf("La variable mayor es \"a\" con valor de: %.1f",a);
		}
printf("\n Fin del programa");
}
