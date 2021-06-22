#include<stdio.h>
int main()
{
	int i,j;
	printf("\nPrint the prime number between 1 to 100 :\n");
	for(i=1;i<=100;i++)
	{
		int count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
			
		}
		if(count==2)
			{
				printf("%d ",i);
			}
	}
}
