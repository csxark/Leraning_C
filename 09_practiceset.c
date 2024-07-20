#include <stdio.h>
// #include<string.h>
// Question 1
// Create a two-dimensional vector using structures in C.
/*struct vector
{
    int x;
    int y;
};

int main(int argc, char const *argv[])
{
    struct vector v1;
    v1.x=2;
    v1.y=5;
    printf("The vector is %di + %dj",v1.x,v1.y);
    return 0;
}*/
// Question 2
/*Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
The vectors must be two–dimensional.*/
/*struct vector
{
    int x;
    int y;
};
int sumvector(struct vector v1,struct vector v2){
    printf("The sum of the vectors is %di + %dj", v1.x+v2.x , v1.y + v2.y);
}
int main(int argc, char const *argv[])
{
    struct vector v1={2,5};
    struct vector v2={5,4};
    printf("The vector is %di + %dj\n",v1.x,v1.y);
    printf("The vector is %di + %dj\n",v2.x,v2.y);
    sumvector(v1,v2);
    return 0;
}*/
// Question 3
/*Create an array of 5 complex numbers with a structure representing a complex number and display them
with the help of a display function. The values must be taken as an input from
the user*/
/*typedef struct co
{
    int real;
    int imaginary;
} complex;

void display(complex c[]){
    for (int i = 0; i < 5; i++)
    {
        printf("The complex number is %d + %di\n", c[i].real, c[i].imaginary);
    }

}

int main(int argc, char const *argv[])
{
    complex crr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the real part:-");
        scanf("%d", &crr[i].real);
        printf("enter the imaginary part:-");
        scanf("%d", &crr[i].imaginary);
    }
    display(crr);
    return 0;
}*/
//Question 4
/*Write a structure capable of storing date. Write a function to compare those
dates.*/
typedef struct date
{
    int dd;
    int mm;
    int yyyy;
}dob;

int compare(dob d1,dob d2){
    if ((d1.yyyy&&d2.yyyy)&&(d1.mm && d2.mm)&&(d1.dd && d2.dd))
    {
        printf("Congarulations! you have same aged");
    }
    else if (d1.yyyy>d2.yyyy)
    {
        if (/* condition */)
        {
            /* code */
        }
        else if (/* condition */)
        {
            /* code */
        }
        else
        {
            /* code */
        }
        
    }
    else
    {
        /* code */
    }
    
}