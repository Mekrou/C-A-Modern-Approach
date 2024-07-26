#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

// holds all our stack data.
static int contents[STACK_SIZE];
// always points to the top of the stack
int *top_ptr = contents;

int main(void)
{
}

void make_empty(void)
{
    top_ptr = contents;
    *top_ptr = 0;
}

bool is_empty()
{
    return (*top_ptr == contents);
}

// returns true if stack if empty, false otherwise.
bool is_full()
{
    return (top_ptr == (contents + STACK_SIZE));
}