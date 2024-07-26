#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_STRINGS 10
#define MAX_LENGTH 100

char *encrypt(char str[], int num)
{
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + num;
    }
    return str;
}

char *decrypt(char str[], int num)
{
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - num;
    }
    return str;
}

int main()
{
    srand(time(NULL));
    int random_number = rand() % 200 + 1;
    // printf("Random number: %d\n", random_number);

    char strings[MAX_STRINGS][MAX_LENGTH];
    char encrypted_strings[MAX_STRINGS][MAX_LENGTH];
    int num_strings = 0;

    while (1)
    {
        printf("Enter 1 to add a string\n");
        printf("Enter 2 to get the Encrypted Strings\n");
        printf("Enter 3 to get the Decrypted Strings\n");
        printf("Enter 4 to Exit\n");
        printf("Enter(ONLY NUMERIC):- ");
        int ch;
        if (scanf("%d", &ch) != 1)
        {
            printf("Invalid input. Please enter a valid number.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }
        switch (ch)
        {
        case 1:
            if (num_strings < MAX_STRINGS)
            {
                printf("Enter the string: ");
                scanf(" %[^\n]%*c", strings[num_strings]);
                strcpy(encrypted_strings[num_strings], strings[num_strings]);
                encrypt(encrypted_strings[num_strings], random_number);
                num_strings++;
            }
            else
            {
                printf("Maximum number of strings reached.\n");
            }
            break;
        case 2:
            for (int i = 0; i < num_strings; i++)
            {
                printf("Encrypted string %d: %s\n", i + 1, encrypted_strings[i]);
            }
            break;
        case 3:
            for (int i = 0; i < num_strings; i++)
            {
                printf("Decrypted string %d: %s\n", i + 1, decrypt(encrypted_strings[i], random_number));
            }
            break;
        case 4:
            exit(0);
        default:
            printf("Enter the valid value\n");
            break;
        }
    }
    return 0;
}


