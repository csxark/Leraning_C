#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(0));
    int randomnum=(rand()%100)+1;
    int no_of_guess=0;
    int guessed;
    do{
        printf("Guess the Number:- ");
        scanf("%d",&guessed);
        if (guessed>randomnum)
        {
            printf("Lower Number please!!\n");
        }
        else if (guessed<randomnum)
        {
            printf("Higher Number please!!\n");
        }
        else{
            printf("congrats!!\n");
        }
        no_of_guess++;

    } while (guessed!=randomnum);
    printf("You guessed the number in %d guesses",no_of_guess);
    return 0;
}
