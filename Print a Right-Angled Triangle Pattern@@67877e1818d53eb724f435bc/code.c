#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    for(int i = 1;i<=a;i++){
        printf("\n");
        for(int j =1;j<=i;j++){
            printf("*");
        }
    }
    return 0;


}