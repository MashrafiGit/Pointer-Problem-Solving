### Problem Statement Link: https://docs.google.com/document/d/1qZpI8UZ1ddpCvHszj2uUC61rpeNTUi_ERTrhTVObNZA/edit?tab=t.0

1. When we use ***pass by value***, it means we are passing a copy of the actual value. Any changes made inside the function do not affect the original variable.

In ***pass by reference***, we are passing the memory address of the variable. So, changes made inside the function do affect the original variable.

2. By default, the array name a acts as `a` pointer to the first element `a[0]`. When accessing `a[3]`, it calculates the memory address using pointer arithmetic:

`a[3] = *(a + 3)`
This means: start from the base address of `a`, and move `3` elements forward.

If each element is an `int` (which typically takes 4 bytes), then:

Memory address of `a[3]` = base address + (3 × 4 bytes)

So, if you try to print `a[3]`, the program will access the value stored at that calculated memory location.