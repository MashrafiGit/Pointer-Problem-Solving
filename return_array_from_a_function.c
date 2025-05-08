#include <stdio.h>

int returnArray()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%p\n", &a[0]);
    return a[10];

    return 0;
}

int main()
{
    int a = returnArray();
    return 0;
}
