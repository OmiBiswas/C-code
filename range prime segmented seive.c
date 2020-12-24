#include <stdio.h>
#include <math.h>

int main() {

        int num, i,n, prime[10000],k=2;

        printf("Enter number (less than or equal to 10000) \n");
        scanf("%d %d",&n,&num);

        /* Generate all numbers between 1 to n,
           Initially assigned zero value */
       for(i = n; i <= num; i++){
            prime[i] = 0;
        }

        while(k <= sqrt(num)){
          for(i = 2; num >= k*i; i++){
             /*Marked multiple of number as 1
               Those numbers which marked 1 are not a prime number
              */
              prime[k*i] = 1;
           }
          k++;
      }

       //Print prime numbers
       for(i = n; i <= num; i++) {
          if(prime[i] == 0) {
             printf("%d\n",i);
          }
       }
      return 0;
}

