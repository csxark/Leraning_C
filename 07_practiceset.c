#include<stdio.h>
//Question 1
/*Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array.*/
/*int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int* ptr=&arr[0];
    printf("The first element of an arr %u is %d \n",ptr,*(ptr));
    printf("The first element of an arr %u is %d \n",ptr+3,*(ptr+3));
    return 0;
}*/
//Question 2
/*Write a program to create an array of 10 integers and store multiplication table of
5 in it.*/
/*int main(int argc, char const *argv[])
{
    int table[21],n;
    printf("Enter the number:- ");
    scanf("%d",&n);
    for (int i = 0; i < 21; i++)
    {
        table[i]=(i*n);
    }
    for (int j = 0; j < 21; j++)
    {
        printf("%d * %d = %d\n",n,j,table[j]);
    }
    
    return 0;
}*/
//Question 3
/*Write a program containing a function which reverses the array passed to it.*/
/*void arryprint(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
void reverse_array(int ar[],int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    {   temp=ar[i];
        ar[i]=ar[n-i-1];
        ar[n-i-1]=temp;
    }
    
}
int main(int argc, char const *argv[])
{
    int a[]={1,2,3,4,5,6,7,8};
    arryprint(a,8);
    reverse_array(a,8);
    arryprint(a,8);
    return 0;
}*/
//Question 4
/*Write a program containing functions which counts the number of positive
integers in an array*/
/*int count(int arr[],int n){
    int c=0;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            c++;
        }
    
    }
    return c;
}
int main(int argc, char const *argv[])
{
    int a[5]={1,2,3,-4,-9};
    printf("the number of positive integers are %d",count(a,5));
    return 0;
}*/
//Question 5
/*Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
and 9 respectively.*/
/*int main(int argc, char const *argv[])
{
    int arr[3][10];
    int n,num[3];
    for (int i = 0; i <3; i++)
    {   printf("Enter a number:- ");
        scanf("%d",&n);
        num[i]=n;
        for (int j = 1; j < 11; j++)
        {
            arr[i][j]=(n*j);
        }
        
    }
    for (int i = 0; i <3; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            printf("%d * %d = %d\n",num[i],j,arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}*/
