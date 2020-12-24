#include<stdio.h>
int main()
{
    int N,M,status[1000],i,j;
    scanf("%d %d",&M,&N);
    int sq = sqrt(N);
    for(i=2;i<=N;i++)
        status[i]=0;

    for (int i = 4; i <= N; i += 2) {
        status[i] = 1;
    }

    for (int i = 3; i <= sq; i += 2) {
        if (status[i] == 0)
            {
            for (int j = i * i; j <= N; j += i)
                status[j] = 1;
             }
    }
    status[1] = 1;
    for(i=M;i<=N;i++)
    {
        if(!status[i])
          printf("%d\n",i);

          }
          return 0;
}


