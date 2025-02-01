
#include <stdbool.h>
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    int cnt = 0;

    if(a<=1){
        printf("Not prime");
    }
    else{
        for(int i = 1; i<=n; i++){
            if((n%i == 0))
                cnt++;
            
        }   
        if(cnt > 2){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
        
    }

    return 0;
}