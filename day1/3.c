// write a program to make left shift and right shift

#include<stdio.h>

int main(){
    int a, b = a;
    printf("Enter the number to do left shift and right shift:");
    scanf("%d", &a);
    int num1 = a << 5;
    printf("\n value of a after left shift : %d \n", num1);
    int num2 = b >> 5;
    printf("valus of b after right shift : %d\n", num2);
    return 0;
}