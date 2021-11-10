#include <stdio.h>

int main(void)
{
    int i;

    i = 33;
    while (i < 127)
    {
        printf("Char %c = %d\n", i, i);
        i++;
    }
    return (0);
}
