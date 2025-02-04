#include <stdio.h>
int main()
{
    int a ;
    char name[50];
    char hobby[50];
    scanf("%s%d%s",&name,&a,&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",a);
    printf("Hobby: %s\n",hobby);
    return 0;
}