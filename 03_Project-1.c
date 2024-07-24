#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3,points=0;
    while (1)
    {
        printf("Choose 0 for Snake\n");
        printf("Choose 1 for Water\n");
        printf("Choose 2 for Gun\n");
        printf("Choose 3 for Exit Game\n");
        printf("Enter your choice:-");
        scanf("%d", &player);
        printf("Computer chose %d\n", computer);
        if (player == 0 && computer == 0)
        {
            printf("Its a Draw!\n");
        }
        else if (player == 0 && computer == 1)
        {
            printf("You Win!\n");
            points++;
        }
        else if (player == 0 && computer == 2)
        {
            printf("You Lose!\n");
        }
        else if (player == 1 && computer == 0)
        {
            printf("You Lose!\n");
        }
        else if (player == 1 && computer == 1)
        {
            printf("Its a Draw!\n");
        }
        else if (player == 1 && computer == 2)
        {
            printf("You win!\n");
            points++;
        }
        else if (player == 2 && computer == 0)
        {
            printf("You win!\n");
            points++;
        }
        else if (player == 2 && computer == 1)
        {
            printf("You Lose!\n");
        }
        else if (player == 2 && computer == 2)
        {
            printf("Its a Draw!\n");
        }
        else if (player == 3)
        {
            printf("Goodbye! You scored %d Points\n",points);
            exit(0);
        }
        else
        {
            printf("Something went wrong!");
        }
    }
}
