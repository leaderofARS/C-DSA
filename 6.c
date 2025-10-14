#include <stdio.h>

int main(){
    printf("enter a number :");
    int n;
    scanf("%d", &n);
    int sum = 0;
    while (n!=0) {
        int d = n % 10;
        n = n/10;
        sum = sum + d;
        // sum = sum*10 + d;

    }
    printf("sum of digits: %d", sum);
    return 0;

}