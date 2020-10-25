#include <stdio.h>
#include <math.h>
int main (){
int a,b,c,d;
float r1,r2;
	printf("Ecuacion: \n");
	printf("ax^2+bx+c \n"); /*ejemplo de la ecuacion*/
		printf("Introduzca el valor \"a\" de tu ecuacion: ");
		scanf("%d",&a); /*lectura del valor "a"*/
		printf("Introduzca el valor \"b\" de tu ecuacion: ");
		scanf("%d",&b); /*lectura del valor "b"*/
		printf("Introduzca el valor \"c\" de tu ecuacion: ");
		scanf("%d",&c); /*lectura del valor "c"*/
d=((b)*(b)-4*(a)*(c));  /*operaciones para saber si la raiz cuadrada tiene resultados*/
	if (d==0){/*Primer condicional*/
		r1=(-b+sqrt((b)*(b)-4*(a)*(c)))/(2*(a));
		printf("Tu ecuacion solo tiene un resultado, porque la raiz es cero, y es %f, simplificado es %.1f",r1,r1);
	}
	else if(d<0){/*segundo condicional*/
		printf("Error. Tu ecuacion tiene un resultado imaginario, es decir, tu discriminate (b^2-4ac) \n da un numero negativo que es %d, por lo que no tiene solucion en los numeros reales :)",d);
	}
	else if(d>0){/*tercer condicional*/
		r1=(-b+sqrt((b)*(b)-4*(a)*(c)))/(2*(a));
		r2=(-b-sqrt((b)*(b)-4*(a)*(c)))/(2*(a));
		printf("Tus resultados son: %f y %f, simplificados son %.1f y %.1f respectivamente :)",r1,r2,r1,r2);
	}
printf("\nFin del programa");
}
