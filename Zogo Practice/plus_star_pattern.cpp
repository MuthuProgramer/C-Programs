#include<stdio.h>
int main()
{
	int i,j,m,n,m1;
	scanf("%d",&n);
	m=(n+1)/2;
	m1=2*n-1;
	printf("%d\n",m1);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==m || j==m)
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}
