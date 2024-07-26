### Exercise 12.02
Suppose that `high`, `low` and `middle` are all pointer variables of the same
type, and that `low` and `high` point to elements of an array. Why is the
following statement illegal, and how could it be fixed?

```c
middle = (low + high) / 2;
```

`(low + high) / 2` you cannot add pointers together. This can be fixed by subtracting them.
```c
middle = low + (high - low) / 2
```

You add `low` here to get a pointer result, otherwise it would be an integer. 
`(high - low) / 2` gives you the middle element, and adding that as an offset to `low` gives you the pointer you want.