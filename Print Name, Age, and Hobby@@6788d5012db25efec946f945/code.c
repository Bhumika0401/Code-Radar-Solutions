#include <stdio.h>
int main()
{
    int a ;
    char name[50];
    char hobby[50];
    scanf("%s%d%s",&name,&a,&hobby);
    printf("Name: %s",name);
    printf("Age: %d",a);
    printf("Hobby: %s",hobby);
    return 0;
}