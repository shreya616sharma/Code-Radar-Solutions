#include <stdio.h>

int main(){
    int n,i,j;
    int k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",k);
            k = 1-k;
        }
        printf("\n");
    }
    return 0;
}