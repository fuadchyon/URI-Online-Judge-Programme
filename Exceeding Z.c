
#include<stdio.h>
int main()
{
    int x,z,i,sum=0,count=0;
    scanf("%d%d",&x,&z);
    while(x>=z){
            scanf("%d",&z);
        }
        for(i=x;i<z;i++){
        sum=sum+i;
        count++;
        if(sum>z){

        break;
            }
        }
    printf("%d\n",count);
    return 0;
}
