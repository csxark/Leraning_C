#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;
    printf("Question 1\n");
    printf("C program to find the area of a triangle whose three sides are given.\n");

    printf("Enter the length of side a: ");
    scanf("%f", &a);

    printf("Enter the length of side b: ");
    scanf("%f", &b);

    printf("Enter the length of side c: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("The area of the triangle is: %.2f\n", area);
    }
    else
    {
        printf("The sides cannot form a triangle.\n");
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    printf("Question 2\n");
    printf("C program to check whether the given integer is a multiple of 3, 5 and 7 or by anyone.\n");
    int num, n;
    printf("Enter the number:-");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0 && num % 7 == 0)
    {
        printf("The number is mulpitle of 3,5,7");
    }
    else if (num % 3 == 0 && num % 7 == 0)
    {
        printf("The number is mulpitle of 3,7");
    }
    else if (num % 5 == 0 && num % 7 == 0)
    {
        printf("The number is mulpitle of 5,7");
    }
    else if (num % 3 == 0 && num % 5 == 0)
    {
        printf("The number is mulpitle of 3,5");
    }

    else if (num % 3 == 0)
    {
        printf("The number is multiple of 3");
    }
    else if (num % 5 == 0)
    {
        printf("The number is multiple of 5");
    }
    else if (num % 7 == 0)
    {
        printf("The number is multiple of 7");
    }
    else
    {
        printf("Enter the number:-");
        scanf("%d", &n);
        if (num % n == 0)
        {
            printf("The number is multiple of %d", n);
        }
        else
        {
            printf("it is not a multiple");
        }
    }

    return 0;
}

void main()
{
    printf("Question 3\n");
printf("C program to check leap year(By Using all possible methods).\n");
    int year;
    printf("Enter the year:- ");
    scanf("%d",&year);
    if (year%4==0 || year%100!=0 || year&400==0){
        printf("%d it is a leap year", year);

    }
    else{
        printf("%d it is not a leap year", year);
    }
}

int main(int argc, char const *argv[])
    printf("Question 4\n");
printf("C program to implement a calculator to do basic arithmetic operations.\n");
{
    int a, b, ch;
    printf("enter a number");
    scanf("%d", &a);
    printf("enter a number");
    scanf("%d", &b);
    printf("Press 1 for Addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for Mulptiplication\n");
    printf("Press 4 for Division\n");
    printf("enter a Choice:-");

    switch (ch)
    {
    case 1:
        printf("The sum of %d and %d is %d", a, b, (a + b));
        break;
    case 2:
        printf("The difference of %d and %d is %d", a, b, (a - b));
        break;
    case 3:
        printf("The Mulptiplication of %d and %d is %d", a, b, (a * b));
        break;
    case 4:
        printf("The Division of %d and %d is %d", a, b, (a / b));
        break;

    default:
        break;
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    printf("Question 5\n");
    printf("Write a c program to take input of two numbers, find their sum, product and sum of the squares.\n");
    int a, b, ch;
    printf("enter a number");
    scanf("%d", &a);
    printf("enter a number");
    scanf("%d", &b);
    printf("Press 1 for Addition\n");
    printf("Press 2 for Mulptiplication\n");
    printf("Press 3 for Sum of Squares\n");
    printf("enter a Choice:-");

    switch (ch)
    {
    case 1:
        printf("The sum of %d and %d is %d", a, b, (a + b));
        break;
    case 2:
        printf("The Mulptiplication of %d and %d is %d", a, b, (a * b));
        break;
    case 3:
        printf("The Sum of Squares of %d and %d is %d", a, b, (a * a) + (b * b));
        break;
    default:
        break;
    }
    return 0;
}
