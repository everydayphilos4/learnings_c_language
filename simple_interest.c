//simple interest
#include <stdio.h>
int main(){
    float p,r,t,simpleint;
    printf("enter principal : Rupees ");
    scanf("%f",&p);
    printf("enter rate of interest : ");
    scanf("%f",&r);
    printf("enter time : ");
    scanf("%f",&t);
    simpleint = (p*r*t)/100;  
    printf("simple interest = Rupees %f",simpleint); 
    return 0;    
}
