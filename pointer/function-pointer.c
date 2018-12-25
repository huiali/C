#include <stdio.h>

void sayHello()
{
    puts("Hello World.");
}

void sayHi(int a, int b, char *c)
{
    printf("a:%d,b:%d,c:%s\n", a, b, c);
}

typedef void (*func)(int, int, char *);

int main(int argc, char const *argv[])
{
    void (*fp1)() = &sayHello;
    fp1();

    void (*fp2)(int, int, char *) = &sayHi;
    fp2(1, 2, "hello world");

    func fp3 = &sayHi;
    fp3(11, 22, "sayHI");

    return 0;
}
