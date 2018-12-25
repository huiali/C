#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    for (int i = 0; i < argc; i++)
    {
        printf("index:%d,value:%s\n", i, argv[i]);
    }

    return EXIT_SUCCESS;
}


// ./function/mainfunc "hello" "world"

// index:0,value:./function/mainfunc
// index:1,value:hello
// index:2,value:world