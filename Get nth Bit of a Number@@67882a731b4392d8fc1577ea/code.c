#include <stdio.h>

int main()
{
    int a,n,b;
    scanf("%d %d",&a,&n);
    c = a >> (n-1);
    if(c&1 == 1){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;


}