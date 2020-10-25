#include <stdio.h>
int main (){
float radio,perimetro,area,pi; /*declaraciones*/
	printf("Introduzca el radio del circulo: ");
	scanf("%f",&radio); /*lectura del radio*/
pi=3.141592;
area=pi*(radio*radio);/*operacion*/
perimetro=pi*(radio+radio);/*operacion*/
	printf("El area del circulo es %f y simplificado es %.1f \nEl perimetro es %f y simplificado es %.1f",area,area,perimetro,perimetro);/*resultado e impresion en pantalla*/
printf("\nFin del programa");
}
