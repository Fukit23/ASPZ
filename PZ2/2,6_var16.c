#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

int my_func() {
    return 42;
}

void func_end() {}

int main() {
    size_t s1 = (char*)func_end - (char*)my_func;
    size_t p_size = sysconf(_SC_PAGESIZE);

    void *p1 = mmap(NULL, p_size, PROT_READ | PROT_WRITE | PROT_EXEC, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    
    memcpy(p1, my_func, s1);

    int (*f1)() = p1;
    printf("Result 1: %d\n", f1());

    void *p2 = mremap(p1, p_size, p_size * 2, MREMAP_MAYMOVE);

    int (*f2)() = p2;
    printf("Result 2: %d\n", f2());

    munmap(p2, p_size * 2);
    return 0;
}