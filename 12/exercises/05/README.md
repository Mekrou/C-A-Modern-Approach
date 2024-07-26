# Exercise 12.05

Suppose that a is a one-dimensional array and p is a pointer variable. Assuming that the assignment p = a has just been performed, which of the following expressions are illegal because of mismatched types? Of the remaining expressions, which are true (have a nonzero value)?

(a) p == a[0]
(b) p == &a[0]
(c) *p == a[0]
(d) p[0] == a[0]

# Solution
`a` is illegal because a[0] grabs the element, not an address
`b` is legal because `p` can store the address of an element `&a[0]`
`c` is legal because indirection operator references the element's type, not `p`.
`d` is also legal, even if it feels illegal...
the last three all return true values.