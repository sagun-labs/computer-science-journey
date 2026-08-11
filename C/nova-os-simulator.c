#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void showHelp()
{
    printf("\n===== NovaOS Commands =====\n");
    printf("help   - Show available commands\n");
    printf("about  - About NovaOS\n");
    printf("echo   - Print a message\n");
    printf("clear  - Clear the screen\n");
    printf("exit   - Shut down NovaOS\n");
}

void showAbout()
{
    printf("\n===== NovaOS =====\n");
    printf("NovaOS v1.0\n");
    printf("A simple operating system simulator written in C.\n");
    printf("This is a user-space simulation, not a real OS.\n");
}

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main()
{
    char command[100];

    printf("============================\n");
    printf("          NovaOS\n");
    printf("============================\n");
    printf("NovaOS started successfully!\n");
    printf("Type 'help' to see available commands.\n");

    while (1)
    {
        printf("\nNovaOS> ");

        fgets(command, sizeof(command), stdin);

        command[strcspn(command, "\n")] = '\0';

        if (strcmp(command, "help") == 0)
        {
            showHelp();
        }
        else if (strcmp(command, "about") == 0)
        {
            showAbout();
        }
        else if (strcmp(command, "clear") == 0)
        {
            clearScreen();
        }
        else if (strcmp(command, "exit") == 0)
        {
            printf("Shutting down NovaOS...\n");
            break;
        }
        else if (strncmp(command, "echo ", 5) == 0)
        {
            printf("%s\n", command + 5);
        }
        else if (strcmp(command, "") == 0)
        {
            continue;
        }
        else
        {
            printf("NovaOS: command not found: %s\n", command);
        }
    }

    return 0;
}
