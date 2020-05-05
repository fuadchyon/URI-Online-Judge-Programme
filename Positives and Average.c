
#include<stdio.h>
int main()
{
    double n,sum=0;
    double result;
    int tmp=0,i;
    for(i=0;i<6;++i)
    {
        scanf("%lf", &n);
    if(n > 0){
    tmp=tmp+1;
    sum=sum+n;
        }
    }
 result=sum/tmp;
 printf("%d valores positivos\n",tmp);
 printf("%0.1f\n",result);

 return 0;
}

