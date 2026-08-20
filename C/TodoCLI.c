#include <stdio.h>
#include <string.h>

#define MAX_TASKS 100
#define TASK_LENGTH 100

typedef struct
{
    char description[TASK_LENGTH];
    int completed;
} Task;


void addTask(Task tasks[], int *count)
{
    if (*count >= MAX_TASKS)
    {
        printf("\nTask list is full!\n");
        return;
    }

    printf("\nEnter task: ");
    getchar();
    fgets(tasks[*count].description, TASK_LENGTH, stdin);

    tasks[*count].description[
        strcspn(tasks[*count].description, "\n")
    ] = '\0';

    tasks[*count].completed = 0;

    (*count)++;

    printf("Task added successfully!\n");
}


void viewTasks(Task tasks[], int count)
{
    if (count == 0)
    {
        printf("\nNo tasks available.\n");
        return;
    }

    printf("\n==============================\n");
    printf("          YOUR TASKS\n");
    printf("==============================\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d. [%c] %s\n",
               i + 1,
               tasks[i].completed ? 'X' : ' ',
               tasks[i].description);
    }

    printf("==============================\n");
}


void completeTask(Task tasks[], int count)
{
    int taskNumber;

    if (count == 0)
    {
        printf("\nNo tasks available.\n");
        return;
    }

    viewTasks(tasks, count);

    printf("\nEnter task number to complete: ");
    scanf("%d", &taskNumber);

    if (taskNumber < 1 || taskNumber > count)
    {
        printf("Invalid task number!\n");
        return;
    }

    tasks[taskNumber - 1].completed = 1;

    printf("Task marked as completed!\n");
}


void deleteTask(Task tasks[], int *count)
{
    int taskNumber;

    if (*count == 0)
    {
        printf("\nNo tasks available.\n");
        return;
    }

    viewTasks(tasks, *count);

    printf("\nEnter task number to delete: ");
    scanf("%d", &taskNumber);

    if (taskNumber < 1 || taskNumber > *count)
    {
        printf("Invalid task number!\n");
        return;
    }

    for (int i = taskNumber - 1; i < *count - 1; i++)
    {
        tasks[i] = tasks[i + 1];
    }

    (*count)--;

    printf("Task deleted successfully!\n");
}


int main()
{
    Task tasks[MAX_TASKS];

    int count = 0;
    int choice;

    do
    {
        printf("\n");
        printf("==============================\n");
        printf("          TODO CLI\n");
        printf("==============================\n");

        printf("1. Add task\n");
        printf("2. View tasks\n");
        printf("3. Complete task\n");
        printf("4. Delete task\n");
        printf("5. Exit\n");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addTask(tasks, &count);
                break;

            case 2:
                viewTasks(tasks, count);
                break;

            case 3:
                completeTask(tasks, count);
                break;

            case 4:
                deleteTask(tasks, &count);
                break;

            case 5:
                printf("\nExiting TodoCLI...\n");
                break;

            default:
                printf("\nInvalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}
