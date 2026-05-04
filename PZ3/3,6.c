#include <stdio.h>
#include <sys/resource.h>

void f1(int d) {
    int a1[1000];
    printf("Depth: %d\n", d);
    f1(d + 1);
}

int main() {
    struct rlimit r1 = {16384, 16384};
    setrlimit(RLIMIT_STACK, &r1);
    f1(1);
    return 0;
}