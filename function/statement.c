#include <stdio.h>

void printHelloWorld()
{
    printf("Hello,world\n");
}

void hello(char *name, int age)
{
    printf("Hello,myname is %s,my age is %d\n", name, age);
}

int add(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    printHelloWorld();
    hello("zhangsan", 15);
    int c = add(2, 3);
    printf("The result is %d\n", c);
    return 0;
}
