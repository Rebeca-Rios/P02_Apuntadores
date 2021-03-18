#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	int a, *ap;
	char b, *bp;
	double c, *cp;
	long d, *dp;
	float e, *ep;
	short f, *fp;
	
	ap = &a;
	bp = &b;
	cp = &c;
	dp = &d;
	ep = &e;
	fp = &f;
	
	printf("\n\tDirección del apuntador: %p\tDirección de la variable int: %p", ap, &a);
	printf("\n\tDirección del apuntador: %p\tDirección de la variable char: %p", bp, &b);
	printf("\n\tDirección del apuntador: %p\tDirección de la variable double: %p", cp, &c);
	printf("\n\tDirección del apuntador: %p\tDirección de la variable long: %p", dp, &d);
	printf("\n\tDirección del apuntador: %p\tDirección de la variable float: %p", ep, &e);
	printf("\n\tDirección del apuntador: %p\tDirección de la variable short: %p", fp, &f);
	printf("\n\n");
	
	a = 1;
	b = 'x';
	c = 3;
	d = 4;
	e = 5;
	f = 6;
	
	printf("\n\tValor del apuntador a int: %d", *ap);
	printf("\n\tValor del apuntador a char: %d", *bp);
	printf("\n\tValor del apuntador a double: %d", *cp);
	printf("\n\tValor del apuntador a long: %d", *dp);
	printf("\n\tValor del apuntador a float: %d", *ep);
	printf("\n\tValor del apuntador a short: %d", *fp);
	printf("\n\n");
	
	*ap = 7;
	*bp = 'y';
	*cp = 9;
	*dp = 10;
	*ep = 11;
	*fp = 12;
	
	printf("\n\tDirección del apuntador a int: %d", a);
	printf("\n\tDirección del apuntador a char: %d", b);
	printf("\n\tDirección del apuntador a double: %d", c);
	printf("\n\tDirección del apuntador a long: %d", d);
	printf("\n\tDirección del apuntador a float: %d", e);
	printf("\n\tDirección del apuntador a short: %d", f);
	printf("\n");
}
