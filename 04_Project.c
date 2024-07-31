#include <stdio.h>
#include <stdlib.h>

// Function to add two matrices
void add(int m, int n, int arr1[m][n], int arr2[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr1[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[]) {
    int m, n;
    printf("Enter the number of rows in the first matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns in the first matrix: ");
    scanf("%d", &n);
    int arr1[m][n];
    int arr2[m][n];
    printf("Enter the elements of the first matrix:-");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\n");
    printf("Enter the elements of the second matrix:-");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    add(m, n, arr1, arr2);
    return 0;
}
