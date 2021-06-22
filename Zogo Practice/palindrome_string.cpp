#include<stdio.h>
int main()
{
	int n,i,j;
	char str[20];
	printf("Enter the string:");   //madam
	scanf("%s",str);
	for(n=0;str[n];n++);		//store ascii value in str eg: a=97 can be store in str[1] n=6 {null value in madam } so zero can be assign so break the for loop
	//printf("%s\n",str[n]);			
	for(i=0,j=n-1;i<j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			break;
		}
		
	}
	if(i>=j)
		{
			printf("Palindrome = %s",str);
		}
		else
			printf("Not a palindrome");
	
}
