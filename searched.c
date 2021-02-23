#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 30

int main()
{
    char *source = "reference different conference adherent belligerence.", dest[SIZE];
    printf("%s\nEnter the word you want to search.\n", source);
    gets(dest);
    int size = 0, size2 = 0, j = 0, count = 0;
    size = strlen(source), size2 = strlen(dest);
    for(int i = 0; i < size; i++)
    {
        if(source[i] == dest[j])
            j++;

        else
            j = 0;

        if(j == size2)
            count++, j = 0;
    }
    printf("%d", count);

    return 0;
}

/*
input: 
eren

output:
There are 5 searched words.
*/
