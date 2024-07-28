#include <stdio.h>

void init_ident_matrix(int a[], int N);
void print_array(const char *identifier, const int *a, int n);

int main(void)
{
    static int a[4][4];
    init_ident_matrix(*a, 4);
    print_array("a", *a, 16);
}

void init_ident_matrix(int a[], int N)
{
    int *p, num_zeros;
    for (p = a, num_zeros = 0; p < a + (N*N); p++, num_zeros++)
    {
        if (num_zeros == 0) {
            *p = 1;
        } else {
            *p = 0;
        }

        if (num_zeros == N) {
            num_zeros = -1;
        }
    }
}

void print_array(const char *identifier, const int *a, int n)
{
    const int *p = a;
    printf("%s: {%d, ", identifier, *p++);
    for (; p < (a + n) - 1; p++)
    {
        printf("%d, ", *p);
    }
    printf("%d}\n", *p);
}