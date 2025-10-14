// write a program to find the maximum sum of sub array of 3


#include <stdio.h>
int main()
{
    int nums;
    printf("enter the number of elements :");
    scanf("%d", &nums);
    int arr[nums];
    printf("Enter the values for the array elements :");
    for (int i = 0 ; i < nums ; i++ ) {
        scanf("%d", &arr[i]);
    }
    int k =3;
    int sum = 0, maxSum = 0;
    for (int i=0; i<k; i++) {
        sum += arr[i];
    }
    maxSum = sum;

    for (int i=k; i<nums; i++) {
        sum = sum + arr[i] - arr[i-k];
        if (maxSum < sum) {
            maxSum = sum;
        }
    }
    printf("\nMaximum Sub Array : %d\n", maxSum);
    return 0;
}

