#include <stdio.h>
// Question 1
/*Write a program to read three integers from a file*/
/*int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("number.txt", "r");
    int num;
    while (fscanf(fptr, "%d", &num))
    {
        printf("%d\n", num);
    }
    return 0;
    fclose(fptr);
}*/

// Question 2
/*Write a program to generate multiplication table of a given number in text
format. Make sure that the file is readable and well formatted.*/
/*int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr=fopen("number.txt","a");
    int num,table;
    printf("Enter the number:- ");
    scanf("%d",&num);
    for (int i = 1; i < 11; i++)
    {   table=num*i;
        fprintf(fptr,"%d * %d = %d\n",num,i,table);
    }
    return 0;
}*/
