#include <stdio.h>
#include<string.h>
// Question 1
/*Write a function slice() to slice a string. It should change the original string such
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
for slice.*/
void slice(char s[], int m, int n)
{
    char c[m - n + 1];
    for (int i = m; i < n + 1; i++)
    {   
        c[i-m]=s[i];
        m--;
    }
    printf("The sliced string is %s",c);
}
int main(int argc, char const *argv[])
{
    char st[]="thisisgoodnight";
    int m=3,n=7;
    slice(st,m,n);
    return 0;
}
