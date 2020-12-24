#include<stdio.h>
int main()
{
    int n,i,fact,j;
    //printf("Enter the Number");
    while(scanf("%d",&n)==1)
    {
    //printf("Prime Numbers are: \n");
    for(i=2; i<=n; i++)
    {
        fact=0;
        for(j=2; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==1)
        {
            //printf("PRIME are:\n");
            printf("%d\n" ,i);
    }
    }
    if(n==0 || n==1)
        printf("NOT PRIME\n");
    }
    return 0;

}
