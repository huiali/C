#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *str1 = "Hello";
    char *str2 = "World";

    const uint32_t DIST_LEN = 100;
    char dist[DIST_LEN];
    memset(dist, 0, DIST_LEN);
    strcat(dist, str1);
    strcat(dist, " ");
    strcat(dist, str2);
    puts(dist);
    return 0;
}
