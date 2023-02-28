𝐉𝐄: 

Here's an example implementation of the  print_array  function in C:

 
#include <stdio.h>

void print_array(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
