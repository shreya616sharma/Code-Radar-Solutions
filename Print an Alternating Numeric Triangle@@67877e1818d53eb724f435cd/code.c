#include <stdio.h>

int main(){
    int n,i,j;
    int k=1;
    int g=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i%2 == 0){
                printf("%d ",g);
                g=1-g;
                
            }
            else{
                printf("%d ",k);
                k =1-k;
            }
            // printf("%d ",k);
            // k = 1-k;
        }
        printf("\n");
    }
    return 0;
}