#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(void)
{
    int a[] = {2, 4, 6, 8, 10};
    int target = 4;

    printf("%d in array? %s\n", target, search(a, 5, target) ? "true" : "false");
}

bool search(const int a[], int n, int key)
{
    const int *p;
    for (p = &a[0]; p < &a[n]; p++)
    {
        if (*p == key)
            return true;
    }
    return false;
}