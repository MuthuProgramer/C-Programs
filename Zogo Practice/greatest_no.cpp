#include<stdio.h>
int great(int n,double arr[]);
int small(int n,double arr[]);
int great(int n,double arr[])
{
	int j;float large=arr[0];
	for(j=1;j<n;j++)
	{
		if(large<arr[j])
		{
			large=arr[j];
		}
	}
	printf("\nThe greatest no : %lf\n",large);
}
int small(int n,double arr[])
{
	int k;float small1=arr[0];
	for(k=1;k<n;k++)
	{
		if(small1>arr[k])
		{
			small1=arr[k];
		}
	}
	printf("\nThe smallest no: %lf\n",small1);
}
int main()
{
	int i,n,large,small_no;
	double arr[200];
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&arr[i]);
	}
	large=great(n,arr);
	small_no=small(n,arr);
	
	//printf("The greatest number is :%.4lf",large);
	//printf("The smallest number is :%.4lf",small_no);	
}
