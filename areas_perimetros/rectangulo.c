//Area y perimetro de un rectangulo

#include<stdio.h>

int main (){
  int h;
  int a;
  int area;
  int perimetro;
  printf ("B?Cual es la altura?\n");
  scanf ("%d", &h);
  printf ("B?Cual es el ancho?\n");
  scanf ("%d", &a);
  area = a * h;
  printf ("Su area es: %d \n", area);
  perimetro = a + a + h + h;
  printf ("Su perimetro es: %d", perimetro);
  return 0;
}
