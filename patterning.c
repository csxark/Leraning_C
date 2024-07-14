#include<stdio.h>

int pattern(int n){
    for (int i = 1; i < (n+1); i++)
    {
        for (int j = 0; j <2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number:- ");
    scanf("%d",&num);
    pattern(num);
    return 0;
}