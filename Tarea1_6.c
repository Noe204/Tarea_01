#include <stdio.h>
int main(){
	float a,b,r;
	printf("Introduzca el valor de \"a\" o el numerador de la fraccion o el divisor (puede ser de un decimal): ");
	scanf("%f",&a);/*lectura del valor de "a"*/
	printf("Introduzca el valor de \"b\" o el denominador de la fraccion o el dividendo: ");
	scanf("%f",&b);/*lectura del valor de "b"*/
		if (b==0){/*primera condicional*/
			printf("Error, no se puede dividir entre cero");
		}
		else if(b!=0){/*segunda condicional*/
			r=a/b;
			printf("La respuesta es %f y simplificado es %.1f",r,r);
		}
printf("\nFin del programa");
}
