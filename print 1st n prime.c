#include<stdio.h>
int main()
{
	int i,j,n,count=0;
	//cout<<"First Ten Prime Numbers Are\n"<<"2";
	scanf("%d",&n);

	for(i=2;i>0;++i)
	{
	    int b=0;
		for(j=2;j<=i/2;++j)
		{
			if(i%j==0){
				b=1;
				break;
			}
		}

		if(b==0)
		{
			printf("%d\n",i);
			count++;
		}
		if(count==n)
			break;
	}

	return 0;
}







