
#include<stdio.h>

int main()
{
    float a;
    char ch='%';
    scanf("%f",&a);
    if(a>=0 && a<=400.00){
        printf("Novo salario: %.2f\n",a+(a*.15));
        printf("Reajuste ganho: %.2f\n",a*.15);
        printf("Em percentual: 15 %c\n",ch);
    }
    else if(a>=400.01 && a<=800.00){
        printf("Novo salario: %.2f\n",a+(a*.12));
        printf("Reajuste ganho: %.2f\n",a*.12);
        printf("Em percentual: 12 %c\n",ch);
    }
    else if(a>=800.01 && a<=1200.00){
        printf("Novo salario: %.2f\n",a+(a*.10));
        printf("Reajuste ganho: %.2f\n",a*.10);
        printf("Em percentual: 10 %c\n",ch);
    }
    else if(a>=1200.01 && a<=2000.00){
        printf("Novo salario: %.2f\n",a+(a*.07));
        printf("Reajuste ganho: %.2f\n",a*.07);
        printf("Em percentual: 7 %c\n",ch);
    }
    else if(a>2000.01){
        printf("Novo salario: %.2f\n",a+(a*.04));
        printf("Reajuste ganho: %.2f\n",a*.04);
        printf("Em percentual: 4 %c\n",ch);
    }

    return 0;
}
