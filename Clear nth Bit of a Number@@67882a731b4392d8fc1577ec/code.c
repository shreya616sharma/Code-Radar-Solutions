#include <stdio.h>

int main()
{
    int a,n,b,c;
    scanf("%d %d",&a,&n);
    b = (a>>(n))|0;
    c = b<<(n+1);
    printf("%d",c);
    return 0;

    
     
}