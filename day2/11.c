// Recursion 
#include <stdio.h>
int add(int num){
    num += add(num);
    return num;
}

int main(){
    int num;
    printf("enter a number :");
    scanf("%d", &num);
    num = add(num);
    printf("\n Sum : %d \n", num);
    return 0;
}