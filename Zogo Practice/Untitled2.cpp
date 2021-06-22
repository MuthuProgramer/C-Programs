#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30],str2[30];
	int i,len,c=0,j;
	printf("Enter the string :");
	gets(str1);
	puts(str1);
	//printf("%s\n",str1);
	len=strlen(str1);
	for(i=len-1;i>=0;i--)
	{
		str2[c]=str1[i];
		c++;
	}
	for(j=0;j<=len;j++)
	{
		printf("%c",str2[j]);
	}
	
}
