#include <stdio.h>
#include<string.h>
// Question 1
/*Write a function slice() to slice a string. It should change the original string such
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
for slice.*/
int slice(char s[], int m, int n)
{
    /*char c[n-m + 1];
    for (int i = m; i < n + 1; i++)
    {   
        c[i-m]=s[i];
        --m;
    }
    printf("The sliced string is",c);*/

    char *ptr1=&s[m];
    char *ptr2=&s[n];
    s=ptr1;
    s[n]='\0';
    return s;

}
int main(int argc, char const *argv[])
{
    char st[]="thisisgoodnight";
    int m=3,n=1;
    printf ("%s",slice(st,m,n));
    return 0;
}
