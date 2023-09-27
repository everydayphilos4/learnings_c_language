// calculate the average from 25 exam scores entered by user
#include<stdio.h>
int main(){

    int i,marks,sum = 0;

    for(i = 1;i<=25;i++){
        printf("enter marks of subject number %d : ",i);
        scanf("\n%d",&marks);
        sum = sum + marks;
    }
    float average = sum / 25;
    printf("average of 25 subjects is : %f ",average);

    return 0;
}
