#include <stdio.h>
#include <stdlib.h>
/*int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int *j= &n;
    printf("The variable is:- %d\n",n);
    printf("The variable location is:- %u\n",j);
    printf("The variable is:- %d\n",*j); 
    return 0;
}*/

/*void sum(int a , int b){
    printf("The sum is %d\n",a+b);
}
void avg(int a,int b){
    printf("The average is %d\n",(a+b)/2);
}   
int main(int argc, char const *argv[])
{
    int num1=49,num2=86;
    int *ptr1=&num1,*ptr2=&num2;
    sum(*ptr1,*ptr2);
    avg(*ptr1,*ptr2); 
    return 0;
}*/

int main(int argc, char const *argv[])
{
    int arr1[3][2]={{7,8},{8,0},{9,5}};
    int arr2[3][2]={{23,5},{23,45},{12,34}};
    // int n;
    // for (int i = 0; i <3; i++)
    // {   
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("Enter the number of %dth row and %dth column:-",i,j);
    //         scanf("%d",&n);
    //         arr[i][j]=n;
    //     }
    // }
    printf("[");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d,\t",arr1[i][j]);
        }
    printf("\n");
    }
    printf("]");
    printf("\t");
    printf("[");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d,\t",arr2[i][j]);
        }
    printf("\n");
    }
    printf("]");
    return 0;
}

