#include<stdio.h>
int main()
{
    int i=1,j,k=0,X;
    while(1){

        scanf("%d",&X);
        if(X==0)break;
        else if(X%2!=0)X++;
        for(j = 0;j < 5;j++){
            k += X;
            X += 2;
        }
        printf("%d\n",k);
        k=0;
    }
    return 0;
}


