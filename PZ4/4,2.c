#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1 = 1000000;
    int v2 = 1000000;
    int s1 = v1 * v2;
    void *p1 = malloc(s1);
    printf("%p\n", p1);
    return 0;
}