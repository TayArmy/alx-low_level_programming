#include <stdio.h>

int main(void)
{
    int i = 0;
    unsigned long int a = 1, b = 2, next = 0;

    while (i < 97)
    {
        next = a + b;
        a = b;
        b = next;
        printf("%lu", next);

        if (i < 96)
            printf(", ");
        i++;
    }
    putchar('\n');
    return 0;
}
