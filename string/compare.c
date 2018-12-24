#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *str1 = "helloq";
    char *str2 = "hello";
    printf("result=%d\n", str1 == str2);
    char str3[] = "hello";
    char str4[] = "hello";
    printf("result=%d\n", str1 == str3);
    printf("result=%d\n", str3 == str4);
    printf("pointer: str1=%p,str2=%p,str3=%p,str4=%p\n", str1, str2, str3, str4);

    int result = strcmp(str3, str2); //==0  value is equal
    printf("result=%d\n", result);
    return 0;
}