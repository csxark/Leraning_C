#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to clear the screen
void clearScreen() {
    printf("\033[2J\033[1;1H");
}

// Function to print the game menu
void printMenu() {
    clearScreen();
    printf("\033[34m============================================\n");
    printf("\033[34m|                Snake Water Gun            |\n");
    printf("\033[34m============================================\n");
    printf("\033[37mChoose 0 for Snake\n");
    printf("\033[37mChoose 1 for Water\n");
    printf("\033[37mChoose 2 for Gun\n");
    printf("\033[37mChoose 3 for Exit Game\n");
    printf("\033[34m============================================\n");
    printf("\033[37mEnter your choice: ");
}

int main() {
    srand(time(0));
    int player, computer, points = 0;
    while (1) {
        printMenu();
        scanf("%d", &player);
        printf("\033[34m============================================\n");

        time_t t; 
        srand((unsigned) time(&t)); 
        computer = rand() % 3; 

        printf("\033[37mComputer chose %d\n", computer);
        if (player == 0 && computer == 0) {
            printf("\033[33mIts a Draw!\n");
        }
        else if (player == 0 && computer == 1) {
            printf("\033[32mYou Win!\n");
            points++;
        }
        else if (player == 0 && computer == 2) {
            printf("\033[31mYou Lose!\n");
        }
        else if (player == 1 && computer == 0) {
            printf("\033[31mYou Lose!\n");
        }
        else if (player == 1 && computer == 1) {
            printf("\033[33mIts a Draw!\n");
        }
        else if (player == 1 && computer == 2) {
            printf("\033[32mYou win!\n");
            points++;
        }
        else if (player == 2 && computer == 0) {
            printf("\033[32mYou win!\n");
            points++;
        }
        else if (player == 2 && computer == 1) {
            printf("\033[31mYou Lose!\n");
        }
        else if (player == 2 && computer == 2) {
            printf("\033[33mIts a Draw!\n");
        }
        else if (player == 3) {
            printf("\033[34m============================================\n");
            printf("\033[37mGoodbye! You scored %d Points\n", points);
            exit(0);
        }
        else {
            printf("\033[31mSomething went wrong!\n");
        }
        printf("\033[34m============================================\n");
        printf("\033[37mPress Enter to continue...\n");
        getchar();
        getchar();
        computer = rand() % 3;
    }
}
