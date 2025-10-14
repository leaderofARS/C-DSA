// write a program to find unique element from the array
#include <stdio.h>
int main(){
    int arr[10], number;
    printf("Enter the number of Elements :");
    scanf("%d", &number);
    printf("\n Enter the elements : \n");
    for(int i = 0; i<number; i++) {
        scanf("%d", &arr[i]);
    }
    int unique = 0;
    printf("Enter the unique element to find \n");
    for (int i = 0; i<number; i++) {
        unique = unique ^ arr[i];
    }
    printf("\nUnique elements : %d \n", unique);
    return 0;
}