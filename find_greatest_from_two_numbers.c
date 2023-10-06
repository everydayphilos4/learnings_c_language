// let's find greatest from two numbers
#include <stdio.h>
int main(){

    int a,b;
    printf("enter the numbers : ");
    scanf("%d\n%d",&a,&b);
    if((a-b) < 0){
        printf("greatest number is : %d",b);
    }
    else printf("greatest number is : %d",a);
      
    return 0;    
}
