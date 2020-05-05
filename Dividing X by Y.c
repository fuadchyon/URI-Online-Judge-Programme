
#include<stdio.h>
int main()
{
    int n,i,x,y;
    double result;

    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&x,&y);
        if(y==0)
            printf("divisao impossivel\n");


        else{
            result=x/(y*1.00);
    printf("%.1f\n",result);

        }

    }



    return 0;
}
