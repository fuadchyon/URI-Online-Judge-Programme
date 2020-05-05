#include<stdio.h>
int main()
{
    double n,a[100];
    int i;
    for(i=0;i<100;i++){
        scanf("%lf",&n);
        if(n<=10)
            printf("A[%d] = %.1f\n",i,n);

    }

    return 0;
}
