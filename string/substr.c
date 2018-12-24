#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *str = "Hello World";
    char *str1 = strchr(str, 'o');
    puts(str1);

    char *str2 = strrchr(str, 'o');
    puts(str2);

    char *str3 = strstr(str, "Wor");
    puts(str3);

    char str4[10];
    memset(str4, 0, 10);
    strncpy(str4, str, 3);
    puts(str4);

    char *str5 = str + 1;
    puts(str5);

    return 0;
}