#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    void *data1 = "hello,world";
    puts(data1);

    void *data2 = malloc(8);
    printf("%ld\n", sizeof(data2[0])); //1

    int *data3 = data2;

    printf("%ld\n", sizeof(data3[0])); //4
    data3[0] = 1000;
    printf("%d\n", data3[0]); //4
    free(data2);
    
    return 0;
}
