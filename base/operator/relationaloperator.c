#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 15;
    int b = 80;
    int c = a > b;
    int d = a < b;
    int e = a >= b;
    int f = a <= b;
    int g = a == b;
    int h = a > b ? a + b : a - b;
    printf("%d", g);

    return 0;
}
