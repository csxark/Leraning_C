#include <stdio.h>
#include <stdlib.h>

void add(int a[2][2], int b[2][2])
{ int res[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // res[i][j] = {{0}};
            res[i][j] += a[i][j] + b[i][j];
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
    printf("%d ", res[i][j]);
        }
        
    }
}

// void sub(int a[4][4], int b[4][4])
// {
//     int res[4][4] = {{0}};
//     res[0][0] = a[0][0] - b[0][0];
//     printf("%d\n", res[0][0]);
// }

// void multi(int a[4][4], int b[4][4])
// {
    // int res[4][4] = {{0}};
    // res[0][0] = a[0][0] * b[0][0];
    // printf("%d\n", res[0][0]);
// }

int main()
{
    int a[2][2], b[2][2], c;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the element of first matrix: ");
            scanf("%d", &a[i][j]);
            printf("Enter the element of second matrix: ");
            scanf("%d", &b[i][j]);
        }
    }

    while (1)
    {
        printf("Press 1 for Addition of matrix\n");
        printf("Press 2 for Subtraction of matrix\n");
        printf("Press 3 for Multiplication of matrix\n");
        printf("Press 4 for Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            add(a[2][2], b[2][2]);
            break;
        // case 2:
        //     sub(arr1, arr2);
        //     break;
        // case 3:
        //     multi(arr1, arr2);
        //     break;
        case 4:
            return 0;
        default:
            break;
        }
    }
}