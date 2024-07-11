#include<stdio.h>
// Question 1
// Area of Rectangle
/*int main(){
    int length;
    int breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d",&breadth);
    printf("The area of the rectangle is: %d", length * breadth);
}*/
// Question 2
// Area of circle
/*int main(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("The area of the circle is: %.2f", 3.14 * radius);
    return 0;
}*/
// volume of cylinder
/*int main(){
    float radius;
    float height;
    printf("Enter the radius of the cylinder: ");
    scanf("%f",&radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f",&height);
    printf("The volume of the cylinder is: %.2f",3.14*(radius*radius)*height);
    return 0;
}*/
//Question 3
//Simple Interest
/*int main(){
    float principal;
    float rate;
    float time;
    printf("Enter the principal amount: ");
    scanf("%f",&principal);
    printf("Enter the rate of interest: ");
    scanf("%f",&rate);
    printf("Enter the time period: ");
    scanf("%f",&time);
    printf("The simple interest is: %.2f",principal*rate*time/100);
    return 0;
}*/
//Question 4
//Celsius to Fahrenheit
int main(){
    float celsius;
    printf("Enter the temperature in Celsius: ");
    scanf("%f",&celsius);
    printf("The temperature in Fahrenheit is: %.2f",celsius*9/5+32);
    return 0;
}

