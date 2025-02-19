#include <stdio.h>
// Question 1
/*
    int a = 10;
    if (a == 11){
        printf("I am 11");
    }
    else{
        printf("I am not 11");
    }
}*/
// Question 2
/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/
/*int main(){
    int maths, physics, chemistry, total, pass;
    printf("Enter your marks in maths: ");
    scanf("%d", &maths);
    printf("Enter your marks in physics: ");
    scanf("%d", &physics);
    printf("Enter your marks in chemistry: ");
    scanf("%d", &chemistry);
    total = (maths + physics + chemistry)/3;
    //pass = (maths + physics + chemistry) / 3;
    if (total >= 40 &&(maths>33 && physics>33 && chemistry>33)){
        printf("You have passed");
        }
    else{
        printf("You have failed");

    }
}*/
// Question 3
/*void main(){
    float income;
    printf("Enter the Income(In Lakhs):- ");
    scanf("%f",&income);
    if(income>=2.5 && income<=5.0){
        printf("You have to pay %.2f",(income*0.05));

    }
    else if(income>5.0 && income<=10.0){
        printf("You have to pay %.2f",(income*0.20));
    }
    else if(income>10.0){
        printf("You have to pay %.2f",(income*0.30));
    }
    else{
        printf("You have to pay No tax");
    }
}*/
// Question 4
/*Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user.*/
/*void main(){
    int year;
    printf("Enter the year:- ");
    scanf("%d",&year);
    if (year%4==0 || year%100!=0 || year%400==0){
        printf("%d it is a leap year",year);

    }
    else{
        printf("%d it is not a leap year",year);
    }
}*/
// Question 5
/*Write a program to determine whether a character entered by the user is
lowercase or not.*/
/*void main(){
    char ch;
    printf("Enter the character:-");
    scanf("%c",&ch);
    if (ch>=97 && ch<=122){
        printf ("The characyer is lower cased");

    }
    else{
        printf("The character is not lower cased");
    }
}*/
// Question 6
// Write a program to find greatest of four numbers entered by the user.
/*void main()
{
    int a, b, c, d;
    printf("Enter the numbers:- ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("The greatest number is %d", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("The greatest number is %d", b);
    }
    if (c > b && c > a && c > d)
    {
        printf("The greatest number is %d", c);
    }
    else
    {
        printf("The greatest number is %d", d);
    }
}*/
