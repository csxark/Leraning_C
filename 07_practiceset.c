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
