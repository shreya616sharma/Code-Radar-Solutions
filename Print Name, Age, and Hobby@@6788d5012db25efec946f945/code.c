#include <stdio.h>

int main()
{
    char name[100],hobby[100];
    int age;
    scanf("%s %d %s",&name,&age,&hobby);
    printf("Name: %c\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %c",hobby);
    return 0;

}