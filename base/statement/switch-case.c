#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 2;

    switch (a)
    {
    case 1:
        printf("a");
        break;
    case 2:
        printf("b");
        break;
    case 3:
        printf("c");
        break;
    case 4:
        printf("d");
        break;
    case 5:
        printf("e");
        break;
    default:
        printf("f");
        break;
    }
    return 0;
}