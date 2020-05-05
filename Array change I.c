
#include<stdio.h>
int main(){

    int i,n[20],x,j;

    for(i=0;i<20;i++){
        scanf("%d",&n[i]);
        }
    for(i=0,j=19;i<10;i++,j--){
        x=n[i];
        n[i]=n[j];
        n[j]=x;
    }
    for(i=0;i<20;i++){
        printf("N[%d] = %d\n",i,n[i]);
    }

    return 0;
}

