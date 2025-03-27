#include <stdio.h>
int main()
{
    int N,n,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        
        
        for(n=1;n<=i;n++){
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}