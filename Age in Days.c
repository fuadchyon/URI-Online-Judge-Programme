
#include<stdio.h>
int main()
{
    int a,y,m,d;
    scanf("%d",&a);
    y=a/365;
    printf("%d ano(s)\n",y);
    m=(a-(y*365))/30;
    printf("%d mes(es)\n",m);
    d=(a-((m*30)+(y*365)));
    printf("%d dia(s)\n",d);

    return 0;
}
