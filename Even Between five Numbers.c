
#include<stdio.h>
int main()
{
    int n;
    int tmp=0,i;
    for(i=0;i<5;++i)
    {
        scanf("%d", &n);
    if(n%2==0){
    tmp=tmp+1;
        }
    }

 printf("%d valores pares\n",tmp);

 return 0;
}

