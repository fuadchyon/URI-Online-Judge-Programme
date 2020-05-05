#include <stdio.h>
int main()
{
    int y;
    double x;
    scanf ("%lf",&x);
    for(y=0;y<100;y++)
    {
        printf("N[%d] = %.4f\n",y,x);
        x=x/2;
        if(x<=0)
            break;
    }
    return 0;
}
