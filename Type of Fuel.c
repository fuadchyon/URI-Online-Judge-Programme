#include<stdio.h>
int main()
{
    int n,i1=0,i2=0,i3=0;
    while(1){
            scanf("%d",&n);
        if(n==4){
            break;
        }
        else if(n==1){
            i1=i1+1;

        }
        else if(n==2){
            i2=i2+1;

        }
        else if(n==3){
            i3=i3+1;

        }
        else if(n>4){


        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",i1);
    printf("Gasolina: %d\n",i2);
    printf("Diesel: %d\n",i3);


    return 0;
}

