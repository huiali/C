#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum(int n, ...)
{
    int all = 0;
    va_list args;
    va_start(args, n);

    for (int i = 0; i < n; i++)
    {
        all += va_arg(args, int);
    }
    va_end(args);
    return all;
}

int main(void)
{
    printf("sum is %d\n", sum(5, 6, 3, 5, 1, 7));
    return EXIT_SUCCESS;
}
