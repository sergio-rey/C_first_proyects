//Realiza las operaciones matematicas principales y devuelve un resultado entero 

#include<stdio.h>

int main () {
	int ope;
	int num1;
	int num2;
	int resultado;
  printf ("¿Que operacion quiere?\n");
  printf ("Suma = 1\n");
  printf ("Resta = 2\n");
  printf ("Multiplicacion = 3\n");
  printf ("Division = 4\n");
  scanf ("%d",&ope);
  printf ("¿Cual es el primer numero?\n");
  scanf ("%d",&num1);
  printf ("¿Cual es el segundo numero?\n");
  scanf ("%d",&num2);
  
 if (ope == 1){
 	resultado=num1 + num2;
 	printf ("Su resultado es: %d",resultado);	
 }
  if (ope == 2){
 	resultado=num1 - num2;
 	printf ("Su resultado es: %d",resultado);	
 }
  if (ope == 3){
 	resultado=num1 * num2;
 	printf ("Su resultado es: %d",resultado);	
 }
  if (ope == 4){
 	resultado=num1 / num2;
 	printf ("Su resultado es: %d",resultado);	
 }
  return 0;
}
