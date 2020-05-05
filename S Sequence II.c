
#include<stdio.h>
int main()
{
    double a,c,b=1,s=0;
    for(a=1;a<=39;a+=2){

        c=a/b;
        s+=c;
        b=b*2;

    }

    printf("%.2lf\n",s);


    return 0;
}
