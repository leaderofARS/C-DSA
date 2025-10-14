#include <stdio.h>
void add (int a, int b){
    a = a+b;
    printf("Value after sum : %d \n",a);
}
int main(){
    int x, y;
    x=767;
    y=8798;
    add(x, y);
    return 0;
}