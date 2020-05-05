
#include<stdio.h>
int main(void)
{
    float A,B,C;
    double Area;
    scanf("%f%f%f",&A,&B,&C);
    Area=(.5*A*C);
    printf("TRIANGULO: %0.3lf\n",Area);
    Area=3.14159*(C*C);
    printf("CIRCULO: %0.3lf\n",Area);
    Area=(((A+B)/2)*C);
    printf("TRAPEZIO: %0.3lf\n",Area);
    Area=(B*B);
    printf("QUADRADO: %0.3lf\n",Area);
    Area=(A*B);
    printf("RETANGULO: %0.3lf\n",Area);

    return 0;
}
