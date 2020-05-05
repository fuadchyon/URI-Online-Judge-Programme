
#include<stdio.h>
int main()
{
    int n,i;
    double x,x1,x2,x3;

    scanf("%d\n",&n);

    for(i=0;i<n;i++)
    {

        scanf("%lf %lf %lf",&x1,&x2,&x3);
        x=((x1*2)+(x2*3)+(x3*5))/10;

        printf("%.1f\n",x);
    }


 return 0;
}

