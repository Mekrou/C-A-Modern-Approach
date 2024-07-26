#include <stdio.h>

double inner_product(const double *a, const double *b, int n);
void print_array(const char *identifier, const double *a, int n);

int main(void)
{
    double a[] = {1.0, 2.0, 3.0, 4.0};
    double b[] = {1.0, 2.0, 3.0, 4.0};

    printf("Before\n");
    print_array("a", a, 4);
    print_array("b", b, 4);
    printf("After\n");
    printf("%f\n", inner_product(a,b,4));
}

double inner_product(const double *a, const double *b, int n)
{
    const double *p;
    const double *q;
    double result = 0;
    for (p = a, q = b; p < a + n; p++, q++)
    {
        result += (*p) * (*q);
    }
    return result;
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