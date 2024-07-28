#include <stdio.h>
void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void)
{
    int a[] = {1, 3, 1, 1, 5, 6, 6};
    int largest = 0;
    int second_largest = 0;
    find_two_largest(a, 7, &largest, &second_largest);
    printf("Largest: %d\nSecond Largests: %d\n", largest, second_largest);
}
void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    const int *p;
    for (p = a; p < a + n; p++)
    {
        if (*p > *largest)
        {
            int temp = *largest;
            *largest = *p;
            *second_largest = temp;
        }
        else if (*p > *second_largest)
        {
            *second_largest = *p;
        }
    }
}
void print_array(const char *identifier, const double *a, int n)
{
    const double *p = a;
    printf("%s: {%f, ", identifier, *p++);
    for (; p < (a + n) - 1; p++)
    {
        printf("%f, ", *p);
    }
    printf("%f}\n", *p);
}