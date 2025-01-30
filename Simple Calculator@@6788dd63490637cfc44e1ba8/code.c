#include <stdio.h>

int main()
{
    int a,b;
    char c;
    scanf("%d %d",&a,&b);
    get char c;
    if(c = "+"){
        printf(a+b);
    }
    else if(c = "-"){
        printf(a-b);
    }
    else if(c = "*"){
        printf(a*b);
    }
    else{
        printf(a/b);
    }
    return 0;
}