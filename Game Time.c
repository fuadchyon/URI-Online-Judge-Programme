
#include<stdio.h>
int main()
{
    int start,finish;
    scanf("%d%d",&start,&finish);
    if(start>finish){
        printf("O JOGO DUROU %d HORA(S)\n",(24-start)+finish);
    }
    else if(finish>start){
        printf("O JOGO DUROU %d HORA(S)\n",finish-start);
    }
    else if(start==finish){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;
}
