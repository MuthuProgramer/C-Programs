#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30],str2[30];
	int i,len;
	printf("Enter the string :");
	scanf("%s",str1);
	len=strlen(str1);
	for(i=len;i>=0;i--)
	{
		str2[i]=str1[i];
	}
	printf("%s",str2);
}
