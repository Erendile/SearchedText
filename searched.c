#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *source = "reference different conference adherent belligerence";
    char *dest = "eren";
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
output: 5
*/
