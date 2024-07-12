#include<stdio.h>
//Question1
//Write a program to print multiplication table of a given number n.
/*void main(){
    int n;
    printf("Enter the number:- ");
    scanf("%d",&n);
    for (int i = 1; i <=10; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    
}*/
//Question 2
//Write a program to print multiplication table of 10 in reversed order.
/*void main(){
    int n=10;
    for (int i = 10; i>0; i--)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    
}*/
//Question 3
//Write a program to sum first ten natural numbers using while loop
/*void main(){
    int n=0,c=0;
    while (n<11){
        c+=n;
        n++;
    }
    printf("%d",c);
}*/
//Question 4
//Write a program to implement program 3 using ‘for’ and ‘do-while’ loop. 
/*void main(){
    int c=0,a=0,n=0;
    for (int i = 0; i < 11; i++)
    {
        c+=i;
    }
    printf("%d\n",c);
    do
    {
        a+=n;
        n++;
    } while (n<11);
    printf("%d",a);
}*/
//Question 5
/*Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).*/
/*int main(int argc, char const *argv[])
{
    int c=0;
    for (int i = 0; i <11; i++)
    {
        c+=(i*8);
    }
    printf("%d",c);
    return 0;
}*/
//Question 6
//Write a program to calculate the factorial of a given number using a for loop.
/*int main(int argc, char const *argv[])
{
    int f=7,n,c=1;
    // printf("Enter the number:- ");
    // scanf("%d",f);
    for (int i = 1; i<=f; i++)
    {
        c*=i;
    }
    printf("The factorial is %d\n",c);
    while (n<=f)
    {
        c*=n;
        n++;
    }
    printf("The factorial is %d",c);
}*/
//Question 7
//. Write a program to check whether a given number is prime or not using loops.
/*int main(int argc, char const *argv[])
{
    int num,prime=0;
    printf("Enter the number:- ");
    scanf("%d",&num);
    for (int i = 2; i < num; i++)
    {
        if (num%i==0 && num!=2)
        {
            prime=1;
            break;
        }
    }
    if (prime)
    {
        printf("The number is not prime");
    }
    else{
        printf("The number is prime");
    }
    return 0;
}*/

