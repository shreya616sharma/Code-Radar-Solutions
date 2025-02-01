#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a>1 && a%a==0 && a%1==0){
        printf("Prime");
    }
    elsee{
        printf("Not Prime");
    }
    return 0;
}