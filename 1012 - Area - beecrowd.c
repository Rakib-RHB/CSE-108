#include <stdio.h>
int main()
{
    double A, B, C, pi, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    scanf("%lf%lf%lf", &A, &B, &C);
    TRIANGULO= (A*C)/2;
    pi = 3.14159;
    CIRCULO = pi * C * C;
    TRAPEZIO = ((A + B)/2)*C;
    QUADRADO = B * B;
    RETANGULO = A * B;
    printf("TRIANGULO: %.3lf\n", TRIANGULO);
    printf("CIRCULO: %.3lf\n", CIRCULO);
    printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
    printf("QUADRADO: %.3lf\n", QUADRADO);
    printf("RETANGULO: %.3lf\n", RETANGULO);
    return 0;






}


