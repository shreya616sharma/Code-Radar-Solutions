#include <stdio.h>

int main()
{
    int a,n,b;
    scanf("%d %d",&a,&n);
    b = a >> (n);
    if(b&1 == 1){
        printf("0");
    }
    else{
        printf("1");
    }
    return 0;


}