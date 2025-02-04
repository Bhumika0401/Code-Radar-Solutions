#include <stdio.h>
int main()
{
     int a ;
     char name[50];
     char hob[50];
     scanf("%d",&a);
     scanf("%c",&name);
     scanf("%c",&hob);
     printf("Name: %s\n",name);
     printf("Age: %d\n",a);
     printf("Hobby: %s",hob);
     return 0;
}