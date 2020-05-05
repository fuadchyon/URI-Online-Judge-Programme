
#include<stdio.h>
int main(void)
{
    int a;
    double c;
    int b1,b2,b3,b4,b5,b6,b7;
    scanf("%d",&a);
    printf("%d\n",a);
    b1=(a/100);
    printf("%d nota(s) de R$ 100,00\n",b1);
    c=a-(100*b1);
    b2=c/50;
    printf("%d nota(s) de R$ 50,00\n",b2);
    c=a-((100*b1)+(b2*50));
    b3=(c/20);
    printf("%d nota(s) de R$ 20,00\n",b3);
    c=a-((100*b1)+(b2*50)+(b3*20));
    b4=(c/10);
    printf("%d nota(s) de R$ 10,00\n",b4);
    c=a-((100*b1)+(b2*50)+(b3*20)+(b4*10));
    b5=(c/5);
    printf("%d nota(s) de R$ 5,00\n",b5);
    c=a-((100*b1)+(b2*50)+(b3*20)+(b4*10)+(b5*5));
    b6=(c/2);
    printf("%d nota(s) de R$ 2,00\n",b6);
    c=a-((100*b1)+(b2*50)+(b3*20)+(b4*10)+(b5*5)+(b6*2));
    b7=(c/1);
    printf("%d nota(s) de R$ 1,00\n",b7);

    return 0;
}
