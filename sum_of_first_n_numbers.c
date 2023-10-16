// progrom : print sum of the first n mumbers
#include <stdio.h>
int main(){

    int n,sum = 0,i = 1;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i;i<=n;i++){
        printf("%d\n",i);
        sum = sum + i;
    }
        printf("sum = : %d\n",sum);
    return 0;    
}
