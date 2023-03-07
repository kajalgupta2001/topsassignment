// sunday or monday


#include<stdio.h>
int main(){
    int i;
    printf("enter switch no:");
    scanf("%d",&i);
    switch (i)
    {
    case 1:
    printf("sunday");
    break;
    case 2:
    printf("monday");
    break;
    case 3:
    printf("tuesday");
    break;
    case 4:
    printf("wednesday");
    break;
    case 5:
    printf("thursday");
    break;
    case 6:
    printf("friday");
    break;
    case 7:
    printf("saturday");
        break;
    default:
    printf("invalid input");
        break;
    }
    
    return 0;
}
