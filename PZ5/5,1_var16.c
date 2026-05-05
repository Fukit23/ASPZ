#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    void *p1 = malloc(10);
    
    uint32_t v1 = (uint32_t)(uintptr_t)p1;
    void *p2 = (void *)(uintptr_t)v1;
    
    printf("%p\n", p1);
    printf("%p\n", p2);
    
    free(p1);
    return 0;
}