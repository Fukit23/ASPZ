#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    void *p1 = malloc(10);
    void *p2 = realloc(p1, SIZE_MAX);
    
    if (!p2) {
        free(p1);
    }
    
    return 0;
}