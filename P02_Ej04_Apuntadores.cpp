#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");//Para poder poner acentos y carácteres especiales
	//Declaración del arreglo y del apuntador
	int arr[10] = {50,5,17,9,12,24,82,91,7,15};
	int *ptr;
	arr[1] = 5;
	ptr = &arr[2]; //El apuntador ptr apunta al elemento arr[2] del arreglo
	
	printf("\n\tEJERCICIO 4\n\n");
	
	///////////////////////////////////////////Impresión de cosas útiles para nuestra comprensión del tema///////////////////////////////////////////
	
	printf("\n\tDirección ptr: %p\n", &ptr); //Dirección correspondiente a ptr
	//Imprimimos 10 elementos de ptr como si fuera un arreglo
	for(int i = 0; i < 10; i++)
		printf("\n\tDirección ptr[%d]: %p", i, &ptr[i]);
	printf("\n\n");
	//Se imprimen las direcciones a las que apunta cada elemento del arreglo ptr
	for(int i = 0; i < 10; i++)
		printf("\n\tDirección a la que apunta ptr[%d]: %p", i, ptr[i]);
	printf("\n\n");
	
	printf("\n\tDirección arreglo: %p\n", &arr); //Dirección correspondiente a arr
	//Imprimimos cada dirección de cada elemento de arr[]
	for(int i = 0; i < 10; i++)
		printf("\n\tDirección arr[%d]: %p", i, &arr[i]);
	printf("\n\n");
	//Imprimimos cada valor guardado en arr[]
	for(int i = 0; i < 10; i++)
		printf("\n\tValor arr[%d]: %d", i, arr[i]);
	printf("\n\n");
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	//Impresión de los incisos a) - j)
	printf("\n\ta) %d\tptr\t\tValor ptr", ptr); 	//Valor de ptr
	printf("\n\tb) %d\t*ptr\t\tValor al que apunta ptr = arr[2]", *ptr);	//Valor al que apunta ptr = arr[2]
	printf("\n\tc) %d\tptr[0]\t\tValor ptr[0] = arr[2]", ptr[0]); 	//Valor ptr[0] = arr[2]
	printf("\n\td) %d\t*ptr + 6\t\tValor arr[2] + 6", *ptr+6); 	//Valor arr[2] + 6
	printf("\n\te) %d\t*(ptr + 6)\t\tValor arr[2 + 6] = arr[8]", *(ptr+6)); 	//Valor arr[2 + 6] = arr[8]
	printf("\n\tf) %d\t*ptr(-1)\t\tValor arr[2] * -1", *ptr * -1); 		//Valor arr[2] * -1
	printf("\n\tg) %d\tptr[-1]\t\tValor ptr[-1] = arr[1]", ptr[-1]); 	//Valor ptr[-1] = arr[1]
	printf("\n\th) %d\tptr[9]\t\tValor ptr[9]", ptr[9]); 	//Valor ptr[9]
	printf("\n\ti) %p\t&arr\t\tDirección de arr", &arr); 	//Dirección de arr
	printf("\n\tj) %p\t&ptr\t\tDirección de ptr", &ptr); 	//Dirección de ptr
	printf("\n\tk) %p\t&*ptr\t\tDirección a la que apunta ptr", ptr); 	//Dirección a la que apunta ptr
}
