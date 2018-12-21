#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 100)
    {
        printf("%d\n", ++i);
    }

    //do...while
    int j = 0;
    do
    {
        printf("%d\n", ++j);
    } while (j < 100);
}