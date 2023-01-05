//  WAP to find area of circle, rectangle and triangle 
 
 // circle:
 
#include<stdio.h>
void main(){
    float radius;
    printf("enter the radius");
    scanf("%f",&radius);
    printf("area is %f",3.14*radius*radius);
 
}

// rectangle:

#include<stdio.h>
void main(){
    float l,b;
     printf("enter the l:");
     scanf("%f",&l);

     printf("enter the b");
     scanf("%f",&b);

     printf("area of rectangle:%f",l*b);
}

// triangle:

#include<stdio.h>
void main(){
    float b,h;
    printf("enter the b");
    scanf("%f",&b);

    printf("enter the h");
    scanf("%f",&h);

    printf("area of triangle is:%f",0.5*b*h);
}