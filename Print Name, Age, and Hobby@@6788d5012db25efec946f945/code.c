#include <stdio.h>
int main()
{
     int a ;
     char name[50];
     char hob[50];
     scanf("%d%c%c",&a,&name,&hob);
     printf("Name: %c\n",name);
     printf("Age: %d\n",a);
     printf("Hobby: %c",hob);
     return 0;
}