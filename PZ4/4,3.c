#include <stdio.h>
#include <stdlib.h>

int main() {
    void *p1 = malloc(0);
    printf("%p\n", p1);
    free(p1);
    return 0;
}