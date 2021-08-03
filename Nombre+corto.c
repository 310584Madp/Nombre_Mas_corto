#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)

{
	int a,b,c,d,e;
	char nombre1[100], nombre2[100], nombre3[100], nombre4[100], nombre5[100];
	printf("Ingrese la primer nombre: ");
	gets(nombre1);

	printf("Ingrese la segundo nombre: ");
	gets(nombre2);

	printf("Ingrese la tercer nombre: ");
	gets(nombre3);

	printf("Ingrese el cuarto nombre: ");
	gets(nombre4);

	printf("Ingrese el quinto nombre: ");
	gets(nombre5);

	a=strlen(nombre1);
	printf("la longitud del nombre 1 es: %d\n",a);

	b=strlen(nombre2);
	printf("la longitud del nombre 2 es: %d\n",b);

	c=strlen(nombre3);
	printf("la longitud del nombre 3 es: %d\n",c);

	d=strlen(nombre4);
	printf("la longitud del nombre 4 es: %d\n",d);

	e=strlen(nombre5);
	printf("la longitud del nombre 5 es: %d\n",e);

	if(a<b && a<c && a<d && a<e)
    printf("el nombre mas corto es: %s",nombre1);
    else if(b<a && b<c && b<d && b<e)
    printf("el nombre mas corto es: %s",nombre2);
    else if(c<a && c<b && c<d && c<e)
    printf("el nombre mas corto es: %s",nombre3);
    else if(d<a && d<b && d<c && d<e)
    printf("el nombre mas corto es: %s",nombre4);
    else if(e<a && e<b && e<c && e<d)
    printf("el nombre mas corto es: %s",nombre5);

}
