// // Calculate how many digits are present in the number input by user which is also input by user

// #include <stdio.h>

// int main(){
//     int number, digit;
//     printf("Enter the number you want to check with how many digit in that number :");
//     scanf("%d %d",&number, &digit);
//     int count = 1;
//     int count1 = 0;
//     int number1 = number;

//     while (number != 0) {
//         int d = number % 10;
//         if (d) {
//            count++;
//         }
//         number /= 10;
//     }
//     int i=0;
//     while (i < count) {
//         int d1 = number1 % 10;
//         if (d1 == digit) {
//             count1++;
//         }
//         number1 /= 10;
//     }
//     printf("%d is the count of %d", count1, digit);
    
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h> // Required for the abs() function

int main() {
    int number;
    int digit_to_find;
    int count = 0;

    // 1. Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter the digit to count (0-9): ");
    scanf("%d", &digit_to_find);

    int original_number = number;

    int temp_number = abs(original_number);


    if (temp_number == 0 && digit_to_find == 0) {
        count = 1;
    } else {
        while (temp_number > 0) {
            int last_digit = temp_number % 10;

            if (last_digit == digit_to_find) {
                count++;
            }

            temp_number /= 10;
        }
    }

    printf("The digit %d appears %d time(s) in %d.\n", digit_to_find, count, original_number);

    return 0;
}