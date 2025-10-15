#include <stdio.h>
void sub_array(int arr[], int n, int target)
{
    int sum = 0, start = 0, end = 0;

    while (end < n) {
        sum += arr[end];

        // Shrink window from left while sum > target and start <= end
        while (sum > target && start <= end) {
            sum -= arr[start];
            start++;
        }

        if (sum == target) {
            printf("Subarray found from index %d to %d\n", start + 1, end + 1);

            printf("Subarray elements: ");
            for (int i = start; i <= end; i++)
                printf("%d%s", arr[i], (i == end) ? "\n" : " ");
            return;
        }

        end++;
    }

    printf("No subarray found with given sum.\n");
}

int main()
{
    int arr[] = {1, 2, 3, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 12;

    sub_array(arr, n, target);
    return 0;
}
