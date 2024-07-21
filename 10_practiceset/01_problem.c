#include <stdio.h>
// Question 1
/*Write a program to read three integers from a file*/
int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("number.txt", "r");
    int num;
    while (fscanf(fptr, "%d", &num) == 1)
    {
        printf("%d\n", num);
    }
    return 0;
    fclose(fptr);
}

// Question 2
/*Write a program to generate multiplication table of a given number in text
format. Make sure that the file is readable and well formatted.*/
// int main(int argc, char const *argv[])
// {

//     return 0;
// }
