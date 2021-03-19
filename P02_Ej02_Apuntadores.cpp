#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, ""); //Para poder poner acentos y carácteres especiales
	//Declaración de los apuntadores
	int *ap;
	char *bp;
	double *cp;
	long *dp;
	float *ep;
	short *fp;
	//Se reserva espacio en la memoria mediante la llamada a malloc para cada apuntador
	ap = (int*) malloc(sizeof(int));
	bp = (char*) malloc(sizeof(char));
	cp = (double*) malloc(sizeof(double));
	dp = (long*) malloc(sizeof(long));
	ep = (float*) malloc(sizeof(float));
	fp = (short*) malloc(sizeof(short));
	
	printf("\n\tEJERCICIO 2\n\n");
	//Se imprimen la dirección a la que apunta el apuntador
	printf("\n\tDirección a la que apunta el apuntador int: %p", ap);
	printf("\n\tDirección a la que apunta el apuntador char: %p", bp);
	printf("\n\tDirección a la que apunta el apuntador double: %p", cp);
	printf("\n\tDirección a la que apunta el apuntador long: %p", dp);
	printf("\n\tDirección a la que apunta el apuntador float: %p", ep);
	printf("\n\tDirección a la que apunta el apuntador short: %p", fp);
	printf("\n\n");
	//Cambio de datos mediante los apuntadores
	*ap = 1;
	*bp = 'x';
	*cp = 2;
	*dp = 3;
	*ep = 4;
	*fp = 5;
	//Impresión mediante los apuntadores
	printf("\n\n\tValores asignados mediante el apuntador:\n");
	printf("\n\tValor del apuntador int: %d", *ap);
	printf("\n\tValor del apuntador char: %c", *bp);
	printf("\n\tValor del apuntador double: %f", *cp);
	printf("\n\tValor del apuntador long: %d", *dp);
	printf("\n\tValor del apuntador float: %f", *ep);
	printf("\n\tValor del apuntador short: %d", *fp);
	printf("\n\n");
	//Cambio de datos mediante los apuntadores
	*ap = 6;
	*bp = 'y';
	*cp = 7;
	*dp = 8;
	*ep = 9;
	*fp = 10;
	//Impresión mediante los apuntadores
	printf("\n\n\tModificación de los valores mediante el apuntador:\n");
	printf("\n\tValor del apuntador int: %d", *ap);
	printf("\n\tValor del apuntador char: %c", *bp);
	printf("\n\tValor del apuntador double: %f", *cp);
	printf("\n\tValor del apuntador long: %d", *dp);
	printf("\n\tValor del apuntador float: %f", *ep);
	printf("\n\tValor del apuntador short: %d", *fp);
	printf("\n\n");
	//Se libera el espacio en memoria de cada apuntador
	free(ap);
	free(bp);
	free(cp);
	free(dp);
	free(ep);
	free(fp);
}
