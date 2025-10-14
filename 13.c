// write a program to find the maximum length of the some array whose elemnts are alternative

#include <stdio.h>

int maxlength(int arr[], int n) {
    int maxlen = 1;
    int curlen = 1;

    for (int i = 1; i < n; i++) {
        // Check if alternates
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) ||
            (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0)) {
            curlen++;
            if (curlen > maxlen)
                maxlen = curlen;
        } else {
            curlen = 1; // reset
        }
    }
    return maxlen;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the values for the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxlen = maxlength(arr, n);
    printf("\nMaximum length = %d\n", maxlen);

    return 0;
}
