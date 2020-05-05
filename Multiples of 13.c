#include<stdio.h>
int main()
{
    int x,y,c,i,sum=0;
    scanf("%d%d",&x,&y);
    if(x<y){
    for(i=x;i<=y;i++){
        if(i%13==0)continue;
            sum=sum+i;
        }
    }
    if(x>y){
    for(i=y;i<=x;i++){
        if(i%13==0)continue;
            sum=sum+i;
        }
    }
    printf("%d\n",sum);

    return 0;
}

