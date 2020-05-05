
#include<stdio.h>
#include<math.h>
int main(void)
{
    double x1,y1,x2,y2,x,y,a;

    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);

    a = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("%.4lf\n",a);

    return 0;
}
