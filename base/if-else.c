#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 25;
    if (x > 11)
    {
        printf("%d\n", ++x);
    }
    else if (x > 20)
    {
        printf("%d\n", --x);
    }
    else
    {
        printf("%d\n", 0);
    }


    //parallel 
    if (x > 11)
    {
        printf("%d\n", ++x);
    }
    if (x > 20)
    {
        printf("%d\n", --x);
    }

    return 0;
}
