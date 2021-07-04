//Area y perimetro de un cuadrado 

#include<stdio.h>

int main () {
	int lado;
	int area;
	int perimetro;
	 printf ("¿Cual es la longitud de un lado?\n");
	 scanf ("%d",&lado);
	 area=lado*lado;
	 printf ("Su area es: %d \n",area);
	 perimetro=lado*4;
	 printf ("Su perimetro es: %d",perimetro);
	 return 0;
}
