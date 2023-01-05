/*
write a simple program to make a simple calculator(to make addition,substraction,multiplication,division,modulo)
*/
#include<stdio.h>
void main(){
    int a=50,b=30;
    printf("\naddition is:%d",a+b);
    printf("\nsubstraction is:%d",a-b);
    printf("\nmultiplication is:%d",a*b);
    float c=(float)a/b;
    printf("\ndivision is:%f",(float)a/b);
    printf("\nmodulous is:%d",a%b);
}