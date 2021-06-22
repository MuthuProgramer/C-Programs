#include<stdio.h>
int main()
{
	int n,i,j,number=1;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=i)
			{
				printf("%d ",number);
				number=2*number;
			}
		}
		printf("\n");
	}
}

