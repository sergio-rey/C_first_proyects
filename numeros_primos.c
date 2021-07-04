//Imprime x cantidad de numeros segun el usuario, al frente de cada numero indica si es un numero primo

#include <stdio.h>

int main(){
    printf("Numeros primos\n");
    printf("¿Quantos numeros quiere?\n");
    int var1;
    int var2;
    int num = 1;
    scanf("%d",&var1);
    var1 = var1 - 2;
  for (int x;x <= var1;x++){
      num++;
    for (int i =1;i <= num;i++){
      if (num%i==0){
          var2++;
      }
    }
      if (var2<=2){
          printf("%d es primo\n", num);
          var2 = 0;
      }
      else {
          printf("%d\n", num);
          var2 = 0;
      }
    
  }
}
