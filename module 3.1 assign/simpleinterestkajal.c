#include<stdio.h>
void main(){
    float p,t,r;

    printf("enter the value of principle amt P:");
    scanf("%f",&p);

    printf("enter the value of turner t:");
    scanf("%f",&t);

    printf("enter the value of rate of interest r:");
    scanf("%f",&r);

    printf("simple interest is%f",p*t*r/100);
}