#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a = 3;         //单精度，4字节，32位
    double b = 3.1;      //双精度，8字节，64位
    long double c = 3.1; //长双精度，16字节，128位

    printf("a=%f,b=%f,c=%Lf", a, b, c);
    return 0;
}
