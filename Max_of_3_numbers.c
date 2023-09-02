// Max of 3 numbers entered
#include <stdio.h>
int main(){
    int a,b,c,max;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    printf("enter c : ");
    scanf("%d",&c);

    if(a>b && a>c)
         max = a;
    else
        if(b>c)
            max = b;
    else
            max = c;    

    printf("maximum number = %d",max); 
    return 0;    
}
