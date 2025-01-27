#include <stdio.h>
int main()
{
    int a ;
    scanf("%d",&a);
    if(400%a==0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}