#include <stdio.h>

int main()
{
    int a,n,b,c;
    scanf("%d %d",&a,&n);
    b = (a>>(n))&(-2);
    c = b<<(n);
    printf("%d",c);
    return 0;

    
     
}