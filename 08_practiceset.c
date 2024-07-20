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
/*int sl(char str[])
{
    int i = 0, count;
    char s = str[i];
    while (s != '\0')
    {
        s = str[i];
        i++;
    }
    return i - 1;
}

int main()
{
    char st[] = "goodmorning";
    printf("%d", sl(st));
    return 0;
}*/
// Question 4
/*Write your own version of strcpy function from <string.h>*/
/*char cp(char s1[],char s2[]){
    int i=0;
    s2[i]=s1[i];
    while (s1[i]!='\0')
    {
    s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';
}
int main(int argc, char const *argv[])
{
    char source[] = "goodmorning";
    char target[30];
    cp(source,target);
    printf("%s , %s",target,source);
    return 0;
}*/
//Question 5
/*Write a program to encrypt a string by adding 1 to the ascii value of its
characters and Write a program to decrypt the string encrypted using encrypt function*/
/*char encrypt(char str[]){
for (int i = 0; i < strlen(str); i++)
{
    str[i]=str[i]+1;
}
    printf("%s\n",str);

}

char decrypt(char str[]){
for (int i = 0; i < strlen(str); i++)
{
    str[i]=str[i]-1;
}
    printf("%s",str);

}

int main(int argc, char const *argv[])
{ 
    char s[]="good afternoon";
    encrypt(s);
    decrypt(s);
    return 0;
}*/
//Question 6
/*Write a program to count the occurrence of a given character in a string.*/
/*int main(int argc, char const *argv[])
{
    char s[]="Good morning";
    char cha='o';
    int count=0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]==cha)
        {
            count+=1;
        }
        else
        {
            continue;
        }    
    }
    printf("The %c in %s is %d times",cha,s,count);
    return 0;
}*/
//Question 7
/*Write a program to check whether a given character is present in a string or not*/
/*int main(int argc, char const *argv[])
{
    char s[]="Good morning";
    char cha='o';
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]==cha)
        {
            printf("The character is present\n");
            break;
        }
        else
        {
            continue;
            printf("The character is not found");
        }
    }
    
    return 0;
}*/
