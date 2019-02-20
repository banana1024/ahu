#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*a,i,m;
    int l;
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    l=0;
    while(n--)
    {

        scanf("%d",&m);
        while(1)
        {

            if(l==0)
            {
                a[l]=m;
                l++;
                break;
            }
            if(a[l-1]>m)
                l--;
            if(a[l-1]<=m)
            {
                a[l]=m;
                l++;
                break;
            }

        }

    }
    for(i=0;i<l-1;i++)
        printf("%d ",a[i]);
    printf("%d\n",a[l-1]);
    return 0;
}
