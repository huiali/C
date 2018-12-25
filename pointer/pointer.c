#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    char *str = "hello";
    int a = 10;
    int *pa = &a;
    printf("%d\n", *pa);

    int32_t *intP = malloc(4);
    // *intP = 100;
    // printf("%d\n", *intP);

    intP[0] = 101;
    intP[1] = 103;

    printf("%d\n", *(intP));
    printf("%d\n", *(intP + 1));

    printf("%ld\n", sizeof(str));
    printf("%ld\n", sizeof(intP));

    free(intP);


    return 0;
}
