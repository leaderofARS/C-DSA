// 

#include <stdio.h>

int main(){
    int m,n,m1,n1,x,y,Ta,To;
    printf("Enter the number of apple and orange Ramu bought : ");
    scanf("%d %d",&m,&n);
    printf("\n Enter the number of apples and oranges that are more than what ramu bought :");
    scanf("%d %d", &m1, &n1);
    printf("\n Enter the number of apples somu eats and oranges eaten by ramu:");
    scanf("%d %d", &x, &y);
    Ta = 2*m + m1 - x;
    To = 2*n +n1 - y;
    printf("\n Total Apples Remaining : %d", Ta);
    printf("\n Total Oranges Remaining : %d \n", To);
    return 0;
}