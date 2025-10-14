// Write a C program to swap the two numbers without using temp, or arithmetic variables.

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    printf("value of a and b(before) : %d %d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\n value of a and b(after) : %d %d \n", a, b);
    return 0;
}