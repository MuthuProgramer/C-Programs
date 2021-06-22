#include<stdio.h>

int main()
{
	int i=2,j;
	if(i<=6)
	{
		printf("%d\n",i+1);
		i=i+2;
	}
	
	for(j=2;j<=6;j=j+2)
	{
		printf("%d",j+1);
	}
}
