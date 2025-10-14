// write a program in C to check if the number is even or odd, if even find the square of the number

#include <stdio.h>
int even_odd_checker(int number){
    if (number % 2 == 0) {
        printf("Number entered is Even \n");
        return number;
    }
    else{
        printf("Entered number is Odd \n");
        return 0;
    }
    return 0;
}

int square(int number)
{
    int sq = number * number;
    return sq;
}
int main(){
    int number;
    printf("Enter a Number :");
    scanf("%d", &number);
    number = even_odd_checker(number);
    number = square(number);
    printf("\n Square of a Number : %d \n", number);
    return 0;
}