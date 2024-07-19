#include <stdio.h>
#include <string.h>
// Question 1
/*Write a function slice() to slice a string. It should change the original string such
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
for slice.*/
/*char* slice(char s[], int m, int n)
{
    char (*ptr1)=&s[m];
    char (*ptr2)=&s[n];
    s=ptr1;
    s[n-m+1]='\0';
    return s;
}

int main(int argc, char const *argv[])
{
    char st[]="Harry Bhai";
    int m=1,n=7;
    printf ("%s",slice(st,m,n));

}*/
// Question 2
/*. Write a program to take string as an input from the user using %c and %s confirm
that the strings are equal.*/
/*int main(int argc, char const *argv[])
{
    char str[]="goodnight";
    printf("This is a %c and %s",str[7],str);
    return 0;
}*/
// Question 3
// Write your own version of strlen function from <string.h>
int sl(char str)
{
    int i = 0, count;
    char s = str[i];
    while (s != '/0')
    {
        s = str[i];
        i++;
    }    
    return i - 1;
}

int main()
{
    char st[] = "goodnight";
    printf("%d", sl(st));
    return 0;
}
