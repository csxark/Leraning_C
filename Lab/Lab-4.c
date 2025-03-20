#include <stdio.h>
#include <math.h>

// // Question 1
// int main(int argc, char const *argv[])
// {
//     int h,b,l,w,r,ch;
//     printf("Enter 1 for area of circle\n");
//     printf("Enter 2 for area of rectangle\n");
//     printf("Enter 3 for area of triangle\n");
//     printf("Enter your choice\n");
//     scanf("%d",&ch);
//     switch (ch)
//     {
//     case 1:
//         printf("Enter the radius");
//         scanf("%d",&r);
//         printf("The area of circle is %d",r*r*3.14);
//         break;
//     case 2:
//         printf("Enter the lenght");
//         scanf("%d",&l);
//         printf("Enter the width");
//         scanf("%d",&w);
//         printf("The area of rectangle is %d",l*w);
//         break;
//     case 3:
//         printf("Enter the height");
//         scanf("%d",&h);
//         printf("Enter the base");
//         scanf("%d",&b);
//         printf("The area of triangle is %d",0.5*b*h);
//         break;
//     default:
//         break;
//     }
//     return 0;
// }

// //Question 2
// int main(int argc, char const *argv[])
// {
//     int h,b,l,w,r,ch;
//     printf("Enter 1 for area of circle\n");
//     printf("Enter 2 for area of rectangle\n");
//     printf("Enter 3 for area of triangle\n");
//     printf("Enter your choice\n");
//     scanf("%d",&ch);
//     switch (ch)
//     {
//     case 1:
//         printf("Enter the radius");
//         scanf("%d",&r);
//         printf("The area of circle is %d",r*r*3.14);
//     case 2:
//         printf("Enter the lenght");
//         scanf("%d",&l);
//         printf("Enter the width");
//         scanf("%d",&w);
//         printf("The area of rectangle is %d",l*w);
//     case 3:
//         printf("Enter the height");
//         scanf("%d",&h);
//         printf("Enter the base");
//         scanf("%d",&b);
//         printf("The area of triangle is %d",0.5*b*h);
//     }
//     return 0;
// }

// // Question 3
// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("Enter the numner between 1-7:");
//     scanf("%d",&n);
//     switch (n)
//     {
//     case 1:
//         printf("Sunday");
//         break;
//     case 2:
//         printf("Monday");
//         break;
//     case 3:
//         printf("Tuesday");
//         break;
//     case 4:
//         printf("Wednesday");
//         break;
//     case 5:
//         printf("Thursday");
//         break;
//     case 6:
//         printf("Friday");
//         break;
//     case 7:
//         printf("Saturday");
//         break;
//     default:
//         break;
//     }
//     return 0;
// }

// // Question 4
// int main(int argc, char const *argv[]){
//     int n1,n2,ch;
//     printf("Enter number 1");
//     scanf("%d",&n1);
//     printf("Enter number 2");
//     scanf("%d",&n2);
//     printf("Enter 1 for Addition\n");
//     printf("Enter 2 for Subtraction\n");
//     printf("Enter 3 for Multiplication\n");
//     printf("Enter 4 for Division\n");
//     scanf("%d",&ch);
//     switch (ch)
//     {
//     case 1:
//         printf("Sum:%d",n1+n2);
//         break;
//     case 2:
//         printf("Difference:%d",n1-n2);
//         break;
//     case 3:
//         printf("Product:%d",n1*n2);
//         break;
//     case 4:
//         printf("Division:%d",n1/n2);
//         break;
//     default:
//         break;
//     }
//     return 0;
// }

// // Question 5
// int main(int argc, char const *argv[])
// {
//     return 0;
// }

// Assignment-1

// // Question 1
// int main() {
//     int num, originalNum, remainder;
//     int sum = 0;
//     printf("Enter a 4-digit number: ");
//     scanf("%d", &num);
//     // Check if number has exactly 4 digits
//     // if (num < 1000 || num > 9999) {
//     //     printf("Please enter a valid 4-digit number.\n");
//     //     return 1;
//     // }
//     originalNum = num;
//     while (num != 0) {
//         remainder = num % 10;
//         sum += pow(remainder, 4);
//         num /= 10;
//     }
//     if (sum == originalNum) {
//         printf("%d is an Armstrong number.\n", originalNum);
//     } else {
//         printf("%d is not an Armstrong number.\n", originalNum);
//     }
//     return 0;
// }

// // Question 2
// int main() {
//     int num, sum = 0, digit;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     while (num != 0) {
//         digit = num % 10;  // Extract last digit
//         sum += digit;      // Add digit to sum
//         num /= 10;         // Remove last digit
//     }
//     printf("Sum of digits = %d\n", sum);
//     return 0;
// }

// // Question 3
// #define SQR(x) (x * x)
// int main()
// {
//     int a;
//     int b = 4;
//     a = SQR(b + 2);
//     printf("%d\n", a);
//     return 0;
// }

// // Question 4
// int main(int argc, char const *argv[])
// {
//     int call;
//     float amount=0;
//     printf("Enter the calls:- ");
//     scanf("%d",&call);
//     switch (call)
//     {
//     case 1 ... 150:
//         amount=0;
//         break;
//     case 151 ... 250:
//         amount=call*0.9;
//         break;
//     case 251 ... 400:
//         amount=call*1.2;
//         break;
//     default:
//         amount=call*1.5;
//         break;
//     }
//     printf("The amount is %.2f",amount);
//     return 0;
// }

// // Question 5
// int main() {
//     int a, n;
//     double sum = 1;
//     printf("Enter the value of a: ");
//     scanf("%d", &a);
//     printf("Enter the number of terms (n): ");
//     scanf("%d", &n);
//     for (int i = 2; i <= n; i++) {
//         sum += pow(a, i);
//     }
//     printf("Sum of the series = %.2lf\n", sum);
//     return 0;
// }

// Question 6
// int main()
// {
//     int a = 60;
//     int b = 13;
//     int c;
//     c = a & b;
//     printf("%d\n", c);
//     c = a | b;
//     printf("%d\n", c);
//     c = a ^ b;
//     printf("%d", c);
//     return 0;
// }
// int main()
// {
// printf("%d",5<<3<<2<<1>>6);
// return 0;
// }

// Question 7
// int main() {
//     int n, sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for (int i = 1; i < n; i++) {
//         if (n % i == 0) {
//             sum += i;  
//         }
//     }
//     if (sum == n) {
//         printf("%d is a Perfect Number.\n", n);
//     } else {
//         printf("%d is not a Perfect Number.\n", n);
//     }
//     return 0;
// }

// Question 8
// int main() {
//     int N;
//     printf("Enter number of rows (N): ");
//     scanf("%d", &N);
//     for (int i = 1; i <= N; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Question 9
// int main() {
//     int a, b, c;
//     printf("Enter the lengths of the three sides: ");
//     scanf("%d %d %d", &a, &b, &c);
//     if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
//         printf("This Triangle is NOT possible.\n");
//     } 
//     else {
//         if ((a * a + b * b == c * c) || 
//             (a * a + c * c == b * b) || 
//             (b * b + c * c == a * a)) {
//             printf("Right-angle triangle\n");
//         }
//         else if (a == b && b == c) {
//             printf("Equilateral triangle\n");
//         }
//         else if (a == b || b == c || a == c) {
//             printf("Isosceles triangle\n");
//         }
//         else {
//             printf("Scalene triangle\n");
//         }
//     }
//     return 0;
// }

// Question 10
// int main() {
//     int n, i, largest;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     largest = arr[0];
//     for (i = 1; i < n; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }
//     printf("Largest element = %d", largest);
//     return 0;
// }


// Lab 6
// int main(int argc, char const *argv[])
// {
//     int i,j;
//     for ( i = 5; i>=1; i--)
//     {
//         for ( j = 1; j <=i; j++)
//         {
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int i,j;
//     for ( i = 1; i <=5; i++)
//     {
//         for ( j = 1; j <=i ; j++)
//         {
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }



int main() {
    int i,j, num = 1;
    
    for( i = 1; i <= 5; i++) {
        for( j = 1; j <= i; j++) {
            printf("%d " , num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}


