#include <stdio.h>

int main(void)
{
    int i;
    double d;
    char c;
    printf("The size of an int is: %lu  byte.\n", (unsigned long)sizeof(i));
    printf("The size of an double is: %lu byte.\n", (unsigned long)sizeof(d));
    printf("The size of an char is: %lu byte.\n", (unsigned long)sizeof(c));

    return (0);
}