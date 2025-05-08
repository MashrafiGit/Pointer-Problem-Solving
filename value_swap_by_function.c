#include <stdio.h>

int swapValue(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int x = 10;
    int y = 5;

    printf("before swap: %d %d\n", x, y);
    swapValue(&x, &y);
    printf("swap each other: %d %d", x, y);

    return 0;
}