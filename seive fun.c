#include<stdio.h>
#include<math.h>
void seiveprime(int N);
int main()
{
    int status[1000],i,j,N;
    scanf("%d",&N);
    for(i=2;i<=N;i++)
        status[i]=0;
    for(i=1;i<=N;i++)
        if(status[i]==0)
          printf("%d\n",i);

}
int status[1000];
void seiveprime(int N)
{
    int sq = sqrt(N),i;
    for (int i = 4; i <= N; i += 2) {
        status[i] = 1;
    }
      for (int i = 3; i <= sq; i += 2) {
        if (status[i]==0)
            {
            for (int j = i * i; j <= N; j += i)
                status[j] = 1;
             }
    }
    status[1] = 1;

}


