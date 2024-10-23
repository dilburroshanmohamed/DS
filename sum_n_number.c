#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the limit to be added :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\n sum of %d numbers: %d\n\n",n,sum);
return 0;
}
