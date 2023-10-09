//print first n mumbers.
#include <stdio.h>
int main(){

    int n,i = 1;
    printf("enter a number : ");
    scanf("%d",&n);
//here i is initiated from 1
    for(i;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;    
}
