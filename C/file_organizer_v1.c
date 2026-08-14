#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

int main()
{
    DIR *folder;
    struct dirent *entry;

    folder = opendir(".");

    if (folder == NULL)
    {
        printf("Could not open folder.\n");
        return 1;
    }

    printf("Files in current folder:\n\n");

    while ((entry = readdir(folder)) != NULL)
    {
        printf("%s\n", entry->d_name);
    }

    closedir(folder);

    return 0;
}
