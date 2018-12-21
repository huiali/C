#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 18;
    int b = 5;
    int c = a + b;
    int d = a - b;
    int e = a * b;
    double f =(double) a / b;
    int g = a % b;
    a++;
    b--;
    printf("%f\n", f);
    return 0;
}
