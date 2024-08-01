#include <stdio.h>
#include <stdlib.h>

// Function to add two matrices
void add(int m, int n, int arr1[m][n], int arr2[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr1[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("The New Matrix is \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
}
// Function to sub two matrices
void sub(int m, int n, int arr1[m][n], int arr2[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr1[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    printf("The New Matrix is \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
}

// Function to Multiply two matrices
void mul(int m, int n, int arr1[m][n], int arr2[m][n])
{
    int res[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                res[i][j] = res[i][j] + arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("The New Matrix is \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int m, n, ch;
    printf("Enter the number of rows in the first matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns in the first matrix: ");
    scanf("%d", &n);
    int arr1[m][n];
    int arr2[m][n];
    printf("Enter the elements of the first matrix:-");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\n");
    printf("Enter the elements of the second matrix:-");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("Press 1 for Matrices Addition\n");
    printf("Press 2 for Matrices Substraction\n");
    printf("Press 3 for Matrices Multiplication\n");
    printf("Press 4 for exit\n");
    scanf("%d", &ch);
    while (1)
    {
        switch (ch)
        {
        case 1:
            add(m, n, arr1, arr2);
            break;
        case 2:
            sub(m, n, arr1, arr2);
            break;
        case 3:
            mul(m, n, arr1, arr2);
            break;
        case 4:
            exit(0);
            break;
        default:
            break;
        }
    }
    return 0;
}
