#include <stdio.h>

// WAP to find all the even numbers between the range by the number
/*int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter the number:-");
    scanf("%d",&a);
    printf("Enter the number:-");
    scanf("%d",&b);
    for (int i = a; i <=b; i++)
    {
        if (i%2==0)
        {
            printf("%d, ",i);
        }

    }
}*/

// WAP to find the factors of the number
/*int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number:-");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}*/
// wap to print tables of a range
/*int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter the number:-");
    scanf("%d",&a);
    printf("Enter the number:-");
    scanf("%d",&b);
    for (int i = a; i <=b; i++)
    {
        for (int j = 1; j <11; j++)
        {
            printf("%d X %d = %d\n",i,j,i*j);
        }
    }

    return 0;
}*/

// wap to find factorial
/*int main(int argc, char const *argv[])
{
    int num,c=1;
    printf("Enter a number:-");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
        c*=i;
    }
    printf("The factorial is %d",c);
    return 0;
}*/

// wap to find the sum of all even numbers from a given range by the user
/*int main(int argc, char const *argv[])
{
    int num1,num2,sum = 0;
    printf("Enter starting number:-");
    scanf("%d", &num);
    printf("Enter ending number:-");
    scanf("%d", &num);
    for (int i = num1; i <= num2; i++)
    {
        if (i%2==0)
        {
            sum+=i;
        }

    }
    printf("The sum of even numbers is %d",sum);
    return 0;
}*/
// wap to find a fibonacci series by the number given by the user and also ask how many terms he wants
/*void main(int argc, char const *argv[])
{
    int num1, n, num2;
    printf("Enter  2 numbers you want:-");
    scanf("%d %d", &num1,&num2);
    printf("Enter range you want:-");
    scanf("%d", &n);
    printf("%d\t", num1);
    printf("%d\t", num2);
    for (int i = 1; i < n-1; i++)
    {
        int fibo = num1 + num2;
        printf("%d\t", fibo);
        num1 = num2;
        num2 = fibo;
    }
}*/
// wap to find cube of number upto a given integer
/*int main(int argc, char const *argv[])
{
    int num;
    printf("Enter number you want:-");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d\n",(i*i*i));
    }

    return 0;
}*/
// wap to sum of the number of a user provided numbers
/*int main(int argc, char const *argv[])
{
    int num, n, sum = 0;
    printf("Enter how many numbers you want:-");
    scanf("%d", &num);
    for (int i = 1; i < num+1; i++)
    {
        printf("Enter number %d :-",i);
        scanf("%d", &n);
            sum += n;
    }
    printf("The sum of even numbers is %d",sum);
    return 0;
}*/
