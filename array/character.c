#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[] = "Hello World";

    for (int i = 0; i < strlen(str); i++)
    {
        printf("[index:%d]=%c\n", i, str[i]);
    }
}
