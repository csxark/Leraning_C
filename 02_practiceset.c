#include <stdio.h>
//Question 1
//Write a program to check whether a number is divisible by 97 or not.
void main(){
    int a;
    printf ("Enter the number:- ");
    scanf("%d",&a);
    if(a%97==0){
        printf("The number is divisible by 97");
    }else{
        printf("The number is not divisible by 97");
    }
}