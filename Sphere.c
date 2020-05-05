
#include<stdio.h>
int main(void)
{
    double V;
    float R;
    scanf("%f",&R);

    V=(4.0/3)*3.14159*(R*R*R);

    printf("VOLUME = %0.3lf\n",V);

    return 0;
}
