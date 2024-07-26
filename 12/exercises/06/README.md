### Exercise 12.06
Rewrite the following function to use pointer arithmetic instead of array
subscripting. (In other words, elimate the variable `i` and all uses of the `[]`
operator.) Make as few changes as possible.

```c
int sum_array(const int a[], int n)
{
    int i, sum;

    sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];
    return sum;
}
```

```c
int sum_array(const int *a, int n)
{
    int sum;
    const int *last_ptr = a + n;
    for(sum = 0; a < last_ptr; a++)
        sum += *a;
    return sum;
}
```