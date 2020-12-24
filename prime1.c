#include<stdio.h>
int main()
{
    int i,j,x,p[1000],array[1000],prime=0,n;
    scanf("%d",&n);
    x=sqrt(n);
    array[1]=1;
    for(i=2;i<=n;i++)
        array[i]=0;

    for(i=4;i<=n;i=i+2)
        array[i]=1;
          p[prime++]=2;
    for(i=3;i<=n;i=i+2)
        if(!array[i])
       {
        p[prime++]=i;
        if(i<=x)
        {
            for(j=i*i;j<=n;j=j+i)
            {
                array[j]=1;
            }
        }
    }
    for(i=1;i<=n;i++)
        if(!array[i])
    printf("%d\n",i);

}
