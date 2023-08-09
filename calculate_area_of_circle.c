// calculate area of circle
#include <stdio.h>
int main(){

    float r,area;
    printf("enter the radius : ");
    scanf("%f",&r);
    float pi = 3.14;
    area = r*r*pi;
    printf("area = : %f\n",area);   
    return 0;    
}
