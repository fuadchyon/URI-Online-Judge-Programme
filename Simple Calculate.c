
#include<stdio.h>
int main(void)
{
    int pcode1[50],pcode2[200];
    float price1,price2,price,unit1,unit2;

    scanf("%s %f %f",&pcode1,&unit1,&price1);

    scanf("%s %f %f",&pcode2,&unit2,&price2);

    price=(price1*unit1)+(price2*unit2);

    printf("VALOR A PAGAR: R$ %.2lf\n",price);

    return 0;
}
