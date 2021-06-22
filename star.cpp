#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,i,j;
    char str[30];
    printf("Enter the Number:\n");
    scanf("%d",&N);
    scanf("%s",str);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;i++)
        {
            //if(i==j)
                printf("%s",str);
            
        }
        printf("\n");
    }
    
    
    return 0;
}

