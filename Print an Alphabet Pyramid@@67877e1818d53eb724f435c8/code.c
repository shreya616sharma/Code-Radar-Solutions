#include <stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=65;j<=(65+n);j++){
            printf("%c ",j);
        }
        printf("\n");
    }

}