 #include<stdio.h>

int main()
{
    int i,n,max=0,pos;

    for(i=1; i<=100; i++)
    {
        scanf("%d",&n);
        if (max<n)
        {
            max=n;
            pos=i;
        }
    }

    printf("%d\n%d\n",max,pos);

    return 0;

}


