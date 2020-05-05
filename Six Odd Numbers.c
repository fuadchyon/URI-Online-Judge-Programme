
#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);

    if(x%2==0){
        x=x+1;
    }
    else if(x%2!=0){
        x=x;
    }
    for(i=x;i<=(x+10);i=i+2){
        printf("%d\n",i);
        }


    return 0;
}
