#include <stdio.h>

int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=(2i-1);j++){
            printf("*");
        }
        if(2i-1 != 0 ){
            printf(" ");
            printf("\n");
        }
    }
    return 0;
}