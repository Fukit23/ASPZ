#include <stdio.h>
#include <stdlib.h>

int main() {
    void *p1 = realloc(NULL, 10);
    void *p2 = realloc(p1, 0);
    printf("%p %p\n", p1, p2);
    return 0;
}