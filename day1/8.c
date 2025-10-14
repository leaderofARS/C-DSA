// write a program to print 1 to 5 for skip 3.........

#include <stdio.h>

int main(){
    int sum=0;
    for(int i=1;i<=5;i++){
        if (i!=3) {
            continue;
        }
        printf("%d",i);
    }
    return 0;
}