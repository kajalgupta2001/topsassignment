/*
A
AB
ABC
ABCD
ABCDE
*/

#include<stdio.h>
int main(){
    char ch='A';
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++){
            printf(" %c",ch);
            ch++;
            

        } 
        ch='A';
        printf("\n");
}
return 0;
}
