
#include<stdio.h>
int main(void)
{
    char name[50];
    double fixed,extra,bonus,total;
    scanf("%s",&name);
    scanf("%lf %lf",&fixed,&extra);

    bonus=(extra*15)/100;
    total=fixed+bonus;

    printf("TOTAL = R$ %.2lf\n",total);

    return 0;
}
