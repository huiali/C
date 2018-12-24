#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *str = "abc";
    int a = 100;
    char dist[100];
    memset(dist, 0, 100);
    sprintf(dist, "%s,%d", str, a);
    puts(dist);

    char *str1 = "Hello 123";
    char buf[10];
    memset(buf, 0, 100);
    int i;
    sscanf(str1, "%5s %d", buf, &i);
    printf("string is %s ,and int value is %d", buf, i);

    return 0;
}