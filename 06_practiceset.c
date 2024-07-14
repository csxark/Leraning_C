#include <stdio.h>
//Question 1
/*Write a program to print the address of a variable. Use this address to get the
value of the variable.*/
/*int main(int argc, char const *argv[])
{
    int n=12;
    int* j= &n;
    printf("The variable is:- %d\n",n);
    printf("The variable is:- %u\n",j);
    printf("The variable is:- %d\n",*j); 
    return 0;
}*/
//Question 2
/*Write a program to change the value of a variable to ten times of its current
value.*/
/*void changeto(int* a);
void changeto(int* a){
    *a=*a*10;
}
int main(int argc, char const *argv[])
{   int x=2;
    printf("The value is:- %d\n",x);
    changeto(&x);
    printf("The value is:- %d",x);

    return 0;
}*/
//Question 3
/*Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().*/
/*void sum(int a , int b){
    printf("The sum is %d\n",a+b);
}
void avg(int a,int b){
    printf("The average is %d\n",(a+b)/2);
}   
void sum(int a , int b){
    printf("The sum is %d\n",a+b);
}
void avg(int a,int b){
    float av=(a+b)/2;
    printf("The average is %d\n",av);
}
int main(int argc, char const *argv[])
{
    int num1=4,num2=8;
    sum(num1,num2);
    avg(num1,num2); 
    return 0;
}*/
