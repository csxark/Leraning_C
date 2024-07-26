#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RESET_COLOR "\033[0m"
#define GITHUB_BACKGROUND "\033[48;2;40;42;54m" // GitHub background
#define GITHUB_TEXT "\033[38;2;242;242;242m" // GitHub text
#define GITHUB_ACCENT "\033[38;2;130;224;255m" // GitHub accent
#define GITHUB_ERROR "\033[38;2;255;121;121m" // GitHub error

int main()
{
    int player, computer, points = 0;
    while (1)
    {
        system("cls"); // clear the screen
        printf("%s", GITHUB_BACKGROUND); // set GitHub background
        printf("%sRock, Paper, Scissors Game\n" RESET_COLOR, GITHUB_TEXT);
        printf("%s------------------------\n" RESET_COLOR, GITHUB_TEXT);
        printf("%sPoints: %d\n" RESET_COLOR, GITHUB_TEXT, points);
        printf("%sChoose an option:\n" RESET_COLOR, GITHUB_TEXT);
        printf("%s1. Rock\n" RESET_COLOR, GITHUB_TEXT);
        printf("%s2. Paper\n" RESET_COLOR, GITHUB_TEXT);
        printf("%s3. Scissors\n" RESET_COLOR, GITHUB_TEXT);
        printf("%s4. Exit Game\n" RESET_COLOR, GITHUB_TEXT);
        printf("%sEnter your choice: " RESET_COLOR, GITHUB_TEXT);

        scanf("%d", &player);

        if (player == 4)
        {
            printf("%sGoodbye! You scored %d Points\n" RESET_COLOR, GITHUB_ACCENT, points);
            break;
        }

        time_t t; // declare a time_t variable
        srand((unsigned) time(&t)); // re-seed the rand() function every time
        computer = rand() % 3 + 1; // generate a random number between 1 and 3

        printf("%sYou chose: " RESET_COLOR, GITHUB_TEXT);
        switch (player)
        {
            case 1:
                printf("%sRock\n" RESET_COLOR, GITHUB_ACCENT);
                break;
            case 2:
                printf("%sPaper\n" RESET_COLOR, GITHUB_ACCENT);
                break;
            case 3:
                printf("%sScissors\n" RESET_COLOR, GITHUB_ACCENT);
                break;
            default:
                printf("%sInvalid choice\n" RESET_COLOR, GITHUB_ERROR);
                continue;
        }

        printf("%sComputer chose: " RESET_COLOR, GITHUB_TEXT);
        switch (computer)
        {
            case 1:
                printf("%sRock\n" RESET_COLOR, GITHUB_ACCENT);
                break;
            case 2:
                printf("%sPaper\n" RESET_COLOR, GITHUB_ACCENT);
                break;
            case 3:
                printf("%sScissors\n" RESET_COLOR, GITHUB_ACCENT);
                break;
        }

        if (player == computer)
        {
            printf("%sIt's a Draw!\n" RESET_COLOR, GITHUB_ACCENT);
        }
        else if ((player == 1 && computer == 3) || (player == 2 && computer == 1) || (player == 3 && computer == 2))
        {
            printf("%sYou Win!\n" RESET_COLOR, GITHUB_ACCENT);
            points++;
        }
        else
        {
            printf("%sYou Lose!\n" RESET_COLOR, GITHUB_ERROR);
        }

        printf("%sPress Enter to continue...\n" RESET_COLOR, GITHUB_TEXT);
        getchar(); // wait for the user to press Enter
        getchar(); // consume the newline character
        printf(RESET_COLOR); // reset the background color
    }
    return 0;
}
