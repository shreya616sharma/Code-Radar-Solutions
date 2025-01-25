#include <stdio.h>

int main(){
    int a,n;
    scanf("%d %d",&a,&n);
    if((a>>n)&1 == 1){
        int b = ~(1 << n);
        int c = a&b;
        printf("%d",c);
    }
    else{
        printf("%d",a^(1<<n));
    }
}