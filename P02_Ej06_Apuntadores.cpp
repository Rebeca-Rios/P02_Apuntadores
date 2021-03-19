#include <stdio.h>
#include <stdlib.h>
//Prototipos de las funciones
void suma(float *a, float *b, float *c);
void resta(float *a, float *b, float *c);
void multiplicacion(float *a, float *b, float *c);
void division(float *a, float *b, float *c);

int main(){
	//Declaración de variables
	float a, b, c;
	
	printf("\n\tEJERCICIO 6\n\n");
	//Lectura de a y b
	printf("\n\tIngrese los valores de a y b: ");
	scanf("%f %f", &a, &b);
	//Llamada e impresión del resultado de cada operación. Se pasan las direcciones de cada variable a las funciones
	suma(&a, &b, &c);
	printf("\n\t\ta + b  =  %f\n", c);
	resta(&a, &b, &c);
	printf("\n\t\ta - b  =  %f\n", c);
	multiplicacion(&a, &b, &c);
	printf("\n\t\ta * b  =  %f\n", c);
	division(&a, &b, &c);
	printf("\n\t\ta / b  =  %f\n", c);
}

void suma(float *a, float *b, float *c){
	*c = *a + *b; //Se opera mediante un apuntador para cambiar el valor a la varibale original
}

void resta(float *a, float *b, float *c){
	*c = *a - *b; //Se opera mediante un apuntador para cambiar el valor a la varibale original
}

void multiplicacion(float *a, float *b, float *c){
	*c = *a * *b; //Se opera mediante un apuntador para cambiar el valor a la varibale original
}

void division(float *a, float *b, float *c){
	*c = *a / *b; //Se opera mediante un apuntador para cambiar el valor a la varibale original
}
