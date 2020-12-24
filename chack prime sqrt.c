#include<stdio.h>
int main()
{
    int n,i,fact=0,j;
    while(scanf("%d",&n)==1)
    {
    for(i=2;i*i<=n;i++)//sqrt(n);i++)
           {
            if(n%i==0)
                {
                    fact=1;
                    break;
                }
        }
        if(fact==1)
            printf("%d is not prime\n" ,n);
            else
                printf("%d is prime\n",n);


    }
    return 0;
}
