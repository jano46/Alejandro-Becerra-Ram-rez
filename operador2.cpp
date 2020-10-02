#include <stdio.h>
int main()
{
    int x;
    int y;
    int resultado;
    int resultado2;
    double cociente;

    printf("Ingrese el primer valor: ");
    scanf("%lf", &x);
    
    printf("Ingrese el segundo valor: ");
    scanf("%lf", &y);
   
    resultado = x + y;
    printf("El resultado de la suma es %lf",resultado);
   
    resultado2 = x - y;
    printf("El resultado de la resta es %lf",resultado2);
    
    cociente = x / y;
    printf("El resultado de la division es %lf",cociente);
    
    return 0;

}