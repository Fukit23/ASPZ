#include <stdio.h>
#include <stdlib.h>

int main() {
    void *p1[10];
    void *p2[10];

    for (int v1 = 0; v1 < 10; v1++) {
        p1[v1] = malloc(10000);
        p2[v1] = malloc(10);
    }

    for (int v1 = 0; v1 < 10; v1++) {
        free(p1[v1]);
    }

    void *p3 = malloc(100000);
    printf("%p\n", p3);

    for (int v1 = 0; v1 < 10; v1++) {
        free(p2[v1]);
    }

    if (p3) free(p3);
    
    return 0;
}