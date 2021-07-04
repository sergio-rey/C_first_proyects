//Identifica tu figura geometrica segun sus lados

#include<stdio.h>

int main (){
  int can;
  printf ("B?Cuantos lados tiene tu figura?\n");
  printf ("3-10, 12 y 20\n");
  scanf ("%d", &can);
  if (can == 3)
    {
      printf ("Triangulo");
    }
  if (can == 4)
    {
      int lado1;
      int lado2;
      int angulo;
      printf ("Cuadrilatero\n");
      printf ("B?Cuanto mide sus lados\n");
      scanf ("%d", &lado1);
      scanf ("%d", &lado2);
      if (lado1 == lado2)
	{
	  printf ("B?Todos sus angulos miden 90 grados?\n");
	  printf ("Si = 1\n");
	  printf ("No = 2\n");
	  scanf ("%d", &angulo);
	  if (angulo == 1)
	    {
	      printf ("Es un cuadrado\n");
	    }
	  if (angulo == 2)
	    {
	      printf ("Rombo\n");

	    }
	}
      if (lado1 != lado2)
	{
	  printf ("B?Todos sus angulos miden 90 grados?\n");
	  printf ("Si = 1\n");
	  printf ("No = 2\n");
	  scanf ("%d", &angulo);
	  if (angulo == 1)
	    {
	      printf ("Es un rectangulo\n");
	    }
	  if (angulo == 2)
	    {
	      printf ("Romboide\n");
	    }
	}
    }
  if (can == 5)
    {
      printf ("Pentagono");
    }
  if (can == 6)
    {
      printf ("Hexagono");
    }
  if (can == 7)
    {
      printf ("Heptagono");
    }
  if (can == 8)
    {
      printf ("Octogono o uctagono");
    }
  if (can == 9)
    {
      printf ("Eneagono o nonagono");
    }
  if (can == 10)
    {
      printf ("Decagono");
    }
  if (can == 12)
    {
      printf ("Dodecagono");
    }
  if (can == 20)
    {
      printf ("Icosagono");
    }
  return 0;
}