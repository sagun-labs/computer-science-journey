#include <stdio.h>

#define MEMORY_SIZE 100

struct Block
{
    int start;
    int size;
    int used;
};

void showMemory(struct Block blocks[], int count)
{
    printf("\n===== MEMORY BLOCKS =====\n");

    for (int i = 0; i < count; i++)
    {
        printf("Block %d\n", i);
        printf("Start : %d\n", blocks[i].start);
        printf("Size  : %d bytes\n", blocks[i].size);

        if (blocks[i].used == 1)
            printf("Status: USED\n");
        else
            printf("Status: FREE\n");

        printf("-------------------------\n");
    }
}

int main()
{
    struct Block blocks[1];

    int count = 1;
    int choice;
    int size;

    blocks[0].start = 0;
    blocks[0].size = MEMORY_SIZE;
    blocks[0].used = 0;

    while (1)
    {
        printf("\n===== MEMORY ALLOCATOR =====\n");
        printf("1. Allocate memory\n");
        printf("2. Show memory\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter size to allocate: ");
            scanf("%d", &size);

            if (size <= blocks[0].size)
            {
                blocks[0].used = 1;

                printf("\nAllocated %d bytes!\n", size);
            }
            else
            {
                printf("\nNot enough memory!\n");
            }
        }
        else if (choice == 2)
        {
            showMemory(blocks, count);
        }
        else if (choice == 3)
        {
            printf("Exiting...\n");
            break;
        }
        else
        {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
