#include <stdio.h>

int a1[1000];
int a2[1000] = {1};

void func() {
    int a3[1000];
    int a4[1000] = {1};
    printf("%p %p\n", (void*)a3, (void*)a4);
}

int main() {
    func();
    return 0;
}