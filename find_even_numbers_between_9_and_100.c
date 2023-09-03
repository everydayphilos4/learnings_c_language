// find even numbers between 9 and 100
#include <stdio.h>
int main(){

    int a;
    printf("enter the number between 9 and 100 : ");
    scanf("%d",&a);

    if(a%2 == 0){
        printf("%d is an even number \n ",a);
    }
    else printf("%d is an odd number \n",a);

    printf(" list of all even numbers between 9 and 100 ");
    for(int i=9;i<100;i++){
        if(i%2 == 0){
        printf("%d is an even number \n",i);
    }else
        printf("%d is an odd number \n",i);
    }

    return 0;    
}
