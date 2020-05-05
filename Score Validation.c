#include <stdio.h>
int main()
{
    double a,b,c=0,count= 0;
    while(1)
    {
        if(count==2)
            break;
        scanf("%lf", &a);
        if(a>=0 && a<=10)
        {
            count++;
            c+=a;
        }
        else
            printf("nota invalida\n");
    }
    b=c/2.00;
    printf("media = %.2lf\n", b);
    return 0;
}

