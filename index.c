#include <stdio.h>
#include <stdlib.h>

void add(int a[1][1], int b[1][1]) {
    int res[1][1] = {{0}}; 
    res[0][0] = a[0][0] + b[0][0];
    printf("%d\n", res[0][0]);
}

void sub(int a[1][1], int b[1][1]) {
    int res[1][1] = {{0}};
    res[0][0] = a[0][0] - b[0][0];
    printf("%d\n", res[0][0]);
}

void multi(int a[1][1], int b[1][1]) {
    int res[1][1] = {{0}};
    res[0][0] = a[0][0] * b[0][0];
    printf("%d\n", res[0][0]);
}

int main() {
    int arr1[1][1], arr2[1][1], c;
    printf("Enter the element of first matrix: ");
    scanf("%d", &arr1[0][0]);
    printf("Enter the element of second matrix: ");
    scanf("%d", &arr2[0][0]);
    while (1) {
        printf("Press 1 for Addition of matrix\n");
        printf("Press 2 for Subtraction of matrix\n");
        printf("Press 3 for Multiplication of matrix\n");
        printf("Press 4 for Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &c);
        switch (c) {
        case 1:
            add(arr1, arr2);
            break;
        case 2:
            sub(arr1, arr2);
            break;
        case 3:
            multi(arr1, arr2);
            break;
        case 4:
            return 0; 
        default:
            break;
        }
    }
}