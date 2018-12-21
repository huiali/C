#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 20;
    int b = -10;
    long c = 20;
    long long d = 30;

    int e = 0b100;
    int f = 0xB;
    int g = 010;

    unsigned int h = 12;

    __int32_t i = 15;
    __int8_t j = 16;
    __uint8_t k = 255;
    __int64_t l = 1000;

    printf("%d", j);

    return 0;
}
