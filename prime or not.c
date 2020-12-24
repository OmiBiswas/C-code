#include<stdio.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    if(n<=1)
    return 0;
    for(i=2;i<n;i++)
           {
            {
            if(n%i==0)
            flag=1;
            break;
            }
           }
           if(flag==0)
          printf("%d is prime\n",n);
          else
           printf("%d is not prime.\n",n);
        return 0;

}
