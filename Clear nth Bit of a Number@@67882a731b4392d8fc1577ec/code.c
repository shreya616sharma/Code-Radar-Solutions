#include <stdio.h>

int main()
{
    int a,n;
    scanf("%d %d",&a,&n);
    int b = !((a>>n)&1);
    printf("%d",b);
    return 0;
}