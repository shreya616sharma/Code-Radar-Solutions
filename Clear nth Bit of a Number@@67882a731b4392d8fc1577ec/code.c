#include <stdio.h>

int main()
{
    int a,n,b,c;
    scanf("%d %d",&a,&n);
    b = ~(1 << (n));
    c = a & b;
    printf("%d",c);
    return 0;

    
     
}