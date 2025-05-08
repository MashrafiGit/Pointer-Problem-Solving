#include <stdio.h>

int reverseArray(int a[], int *n)
{
    // why it's print the value, not location? i have to clear;
    int x = a[0];
    int y = *a;
    printf("%d\n", y);

    int i = 0;
    int j = *n - 1;

    while (i < j)
    {
       int tmp = a[i];
       a[i] = a[j];
       a[j] = tmp;

       i++;
       j--;
    }
    

}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    reverseArray(a, &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}