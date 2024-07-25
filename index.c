#include <stdio.h>
#include <stdlib.h>
/*int radius(){
    int r;
    printf("Enter the radius of the circle:-");
    scanf("%d",&r);
    return r;
}
void diameter(){
    int d;
    d=2*radius();
    printf("The diameter of the circle is: %d\n",d);
}
void area(){
    int a,r=radius();
    a=3.14*r*r;
    printf("The area of the circle is: %d\n",a);
}
void circumference(){
    int c;
    c=2*3.14*radius();
    printf("The circumference of the circle is: %d\n",c);
}
int main(int argc, char const *argv[])
{
    diameter();
    area();
    circumference();
    return 0;
}*/

void square()
{
    int s;
    printf("Enter the side of the square:-");
    scanf("%d", &s);
    printf("The area of the square is: %d\n", s * s);
}
void cube()
{
    int c;
    printf("Enter the side of the cube:-");
    scanf("%d", &c);
    printf("The area of the cube is: %d\n", c * c * c);
}
void sphere()
{
    int s;
    printf("Enter the radius of the sphere:-");
    scanf("%d", &s);
    printf("The area of the sphere is: %d\n", 4 * 3.14 * s);
}
void cylinder()
{
    int c;
    printf("Enter the radius of the cylinder:-");
    scanf("%d", &c);
    printf("The area of the cylinder is: %d\n", 2 * 3.14 * c);
}
void circle()
{
    int r;
    printf("Enter the radius of the circle:-");
    scanf("%d", &r);
    printf("The area of the circle is: %d\n", 3.14 * r * r);
}
int main(int argc, char const *argv[])
{
    int ch;
    while (1)
    {

        printf("Press 1 for area of square\n");
        printf("Press 2 for area of cube\n");
        printf("Press 3 for area of sphere\n");
        printf("Press 4 for area of cylinder\n");
        printf("Press 5 for area of circle\n");
        printf("Press 6 for exit\n");
        printf("Enter your choice:-");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            square();
            break;
        case 2:
            cube();
            break;
        case 3:
            sphere();
            break;
        case 4:
            cylinder();
            break;
        case 5:
            circle();
            break;
        case 6:
            exit(0);
        default:
            break;
        }
        return 0;
    }
}
