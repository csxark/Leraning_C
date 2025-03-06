#include<stdio.h>

// int pattern(int n)
//     for (int i = 1; i < (n+1); i++)
//     {
//         for (int j = 0; j <2*i-1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }  
// }
// int main(int argc, char const *argv[])
// {
//     int num;
//     printf("Enter a number:- ");
//     scanf("%d",&num);
//     pattern(num);
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n =6;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <=i; j++) 
//         {
//             printf("%d ",j*j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


int main(int argc, char const *argv[])
{
    int n= 1;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <=i; j++)
        {   
            if (n%3==0)
            {
                n++; 
            }else
            {
                printf("%d\t",n);
                n++; 
            }
            
            
        }
        printf("\n");
    }
    
    return 0;
}
