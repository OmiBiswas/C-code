#include<stdio.h>
#include<math.h>
long long arr[100000000]={0};
long long arr1[100000000];
int main() {
    long long i,j,num,m=0,inc=2,root,q,k;
    num=86028130;
    root=sqrt(num)+1;
    for(i=0;i<num;i++)
        arr[i]=i;
    for(i=2;i<=root;i++){
       if(arr[i]>0) {
          for(j=inc*i;j<=num;j=j+i)
            arr[j]=-1;
           inc++;
      }
    }
    for(i=0;i<num;i++)
        if(arr[i]>1)
        arr1[m++]=i;
               scanf("%lld",&k);
               printf("%lld\n",arr1[k-1]);
          return 0;
}
