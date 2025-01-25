#include <stdio.h>

int main()
{
    char str;
    scanf("%[^\n]%*c", str);
    printf("You entered: %s",str);
    return 0;

}