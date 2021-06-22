#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,i,j,len;
    char str[30];
    scanf("%d",&N);
    scanf("%s",str);
    //M=(2*i)-1;
    len=strlen(str);
    //printf(len);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%s",str);
            if(j<i)
            {
                printf("%d",j);
                
            }
            //else
            //{
           // 	printf("%d%s",j,str);
			//}
            //printf("\n");
        } 
		printf("\n");   
    }
    
    
    return 0;
}

