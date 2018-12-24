#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char *str = "100";
    int a;
    sscanf(str, "%d", &a);
    printf("int value is %d\n", a);

    double j = atof("3.14");
    printf("%f\n", j);

    int value = 100;
    char strvalue[10];
    sprintf(strvalue, "%d", value);
    puts(strvalue);
    return 0;
}