//Area y perimetro de un triangulo

#include<stdio.h>

int main (){
  int area;
  int b;
  int h;
  int op;
  int p;
  printf ("B?Que operacion quiere?\n");
  printf ("Area = 1\n");
  printf ("Perimetro = 2\n");
  scanf ("%d", &op);

  if (op == 1)
    {
      printf ("B?Cuales son los lados?\n");
      printf ("Base\n");
      scanf ("%d", &b);
      printf ("Altura\n");
      scanf ("%d", &h);
      area = (b * h) / 2;
      printf ("Su area es: %d", area);
    }
  if (op == 2)
    {
      int lado1;
      int lado2;
      int lado3;
      printf ("B?Cuales son los lados?\n");
      printf ("Lado 1\n");
      scanf ("%d", &lado1);
      printf ("Lado 2\n");
      scanf ("%d", &lado2);
      printf ("Lado 3\n");
      scanf ("%d", &lado3);
      p = lado1 + lado2 + lado3;
      printf ("Su perimetro es: %d", p);
    }
  return 0;
}
