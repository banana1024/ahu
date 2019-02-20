#include<stdio.h>
int main()
{
    long i,n,f1,f,f0;
    f0=0;
    f1=1;
    scanf("%ld",&n);
    if(n==0)
    {
       printf("0\n");
       return 0;
    }
    if(n==1)
    {
       printf("1\n");
       return 0;
    }
    for(i=2;i<=n;i++)
    {
        f=(f0+f1)%854562545;
        f0=f1;
        f1=f;
    }
printf("%ld\n",f);
return 0;
}

