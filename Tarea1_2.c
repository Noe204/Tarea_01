#include <stdio.h>
int main(){
int  value,b;
	printf("Introduzca un valor entero: ");
	scanf("%d",&value);/*lectura de la varible "value"*/
	b = value %2;
	
		if(b==1){ /*primera condicional*/
			printf("La variable con valor de %d es impar",value);
		}
		else if(b==0){/*segunda condicional*/
			printf("La variable con valor de %d es par",value);
		}
printf("\nFin del programa");
}
