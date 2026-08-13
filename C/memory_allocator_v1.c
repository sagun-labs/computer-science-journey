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

    blocks[0].start = 0;
    blocks[0].size = MEMORY_SIZE;
    blocks[0].used = 0;

    showMemory(blocks, 1);

    return 0;
}
