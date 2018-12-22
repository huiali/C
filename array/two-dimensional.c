#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[3][4] = {
        {1, 3, 5, 7},
        {2, 4, 6, 0},
        {5, 9, 0, 0}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("index(%d,%d)=%d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}
