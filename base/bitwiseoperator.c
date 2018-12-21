#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 15;     //00001111
    int b = 80;     //01010000
    int c = a & b;  //00000000
    int d = a | b;  //01011111
    int e = a ^ b;  //01011111
    int f = ~a;     //11110000
    int g = a << 2; //00111100
    int h = a >> 2; //00000011
    printf("%d", g);

    return 0;
}
