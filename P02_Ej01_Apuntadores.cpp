#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, ""); //Para poder poner acentos y car�cteres especiales
	//Declaraci�n de variables y apuntadores
	int a, *ap;
	char b, *bp;
	double c, *cp;
	long d, *dp;
	float e, *ep;
	short f, *fp;
	//A cada variable se le asigna un apuntador
	ap = &a;
	bp = &b;
	cp = &c;
	dp = &d;
	ep = &e;
	fp = &f;
	
	printf("\n\tEJERCICIO 1\n\n");
	//Se imprimen la direcci�n a la que apunta el apuntador y la de su respestiva variable. La cuales son iguales
	printf("\n\tDirecci�n a la que apunta su apuntador: %p\tDirecci�n variable int: %p", ap, &a);
	printf("\n\tDirecci�n a la que apunta su apuntador: %p\tDirecci�n variable char: %p", bp, &b);
	printf("\n\tDirecci�n a la que apunta su apuntador: %p\tDirecci�n variable double: %p", cp, &c);
	printf("\n\tDirecci�n a la que apunta su apuntador: %p\tDirecci�n variable long: %p", dp, &d);
	printf("\n\tDirecci�n a la que apunta su apuntador: %p\tDirecci�n variable float: %p", ep, &e);
	printf("\n\tDirecci�n a la que apunta su apuntador: %p\tDirecci�n variable short: %p", fp, &f);
	printf("\n\n");
	//Cambio de datos mediante las variables
	a = 1;
	b = 'x';
	c = 2;
	d = 3;
	e = 4;
	f = 5;
	//Impresi�n mediante los apuntadores
	printf("\n\n\tValores asignados mediante la variable. Impresos con el apuntador:\n");
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
	//Impresi�n mediante las variables
	printf("\n\n\tValores asignados mediante el apuntador. Impresos con la variable:\n");
	printf("\n\tValor del apuntador int: %d", a);
	printf("\n\tValor del apuntador char: %c", b);
	printf("\n\tValor del apuntador double: %f", c);
	printf("\n\tValor del apuntador long: %d", d);
	printf("\n\tValor del apuntador float: %f", e);
	printf("\n\tValor del apuntador short: %d", f);
	printf("\n");
}


