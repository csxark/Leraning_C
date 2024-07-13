#include<stdio.h>
//Question 1
//Write a program using function to find average of three numbers.
/*int avg(int a, int b, int c){
    float res=(a+b+c)/3;
    printf("The average is:- %.2f",res);
}
int main(int argc, char const *argv[])
{
    avg(12,8,4);
    return 0;
}*/
//Question 2
/*Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2*/
/*float force(int m){
    return m*9.8;
}
int main(int argc, char const *argv[])
{   
    int m=90;
    printf("the force of attraction is:- %.2f",force(m));
    return 0;
}*/
//Question 3
//Write a program using recursion to calculate nth element of Fibonacci series.
/*int fibonacci(int n){
    if (n==1 || n==2){
        return n-1;
    }
    int f=fibonacci(n-1)+fibonacci(n-2);
    return f;
}
void main(int argc, char const *argv[])
{
    int num=3;
    printf("The series is:- %d",fibonacci(num));   
}*/
//Question 4
//Write a recursive function to calculate the sum of first ‘n’ natural numbers.
/*int sum(int n){
    if (n==1){
        return 1;
    }
    return sum(n-1)+n;
}
int main(int argc, char const *argv[])
{
    int num=2;
    printf("The sum of n natural numbers is %d",sum(num));
    return 0;
}*/
//Question 5
/*Write a recursive function to calculate the sum of first ‘n’ natural numbers.
            *
            ***
            *****
*/
/*int pattern(int n){
    for (int i = 1; i < (n+1); i++)
    {
        for (int j = 0; j <2*i-1; j++)
        {
            printf("\t*");
        }
        printf("\n");
    }
    
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number:- ");
    scanf("%d",&num);
    pattern(num);
    return 0;
}*/
