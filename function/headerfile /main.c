#include <stdio.h>
#include <stdlib.h>
#include "hello.h"

int main(int argc, char const *argv[])
{
    sayHello("zhangsan");
    return 0;
}


//gcc main.c hello.c -o main