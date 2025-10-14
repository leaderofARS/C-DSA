// The online math course provided 'MathAtTip' has designed a course for children called
// Learning Number Recognition and Counting. The assessment part of the course has a
// question where the student is given a number and a digit. The student needs to find out the
// total count of the digits present in the number excluding the given digit.
// Write an algorithm to help the student find out the count of the total number of digits present
// in the number excluding the given digit.

#include <stdio.h>

int main(){
    int n, count, digit;
    printf("Enter the number :");
    scanf("%d", &n);
    printf("Enter the digit :");
    scanf("%d", &digit);
    int number1 = n;
    count =0;
    while (n != 0) {
        int d = n%10;
        if(d != digit){
            count++;
        }
        n = n/10;
    }
    printf("Number of count excluding %d is %d \n", digit, count);
    return 0;
}

