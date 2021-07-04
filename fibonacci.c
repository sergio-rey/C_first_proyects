//Realiza la serie de Fibonacci segun un numero dado 

#include <stdio.h>

int main()
{
    int var1, res, x, y;
    
    printf("Serie de Fibonacci\n");
    printf("¿Cuantos numeros quiere en la serie?\n");
    scanf ("%d", &var1);
    printf("0, 1");
    x = 0;
    y = 1;
    var1 = var1 - 3;
    for (int i; i <= var1; i++){
        res = x + y;
        x = y;
        y = res;
        printf(", %d", res);
    }
    return 0;
}