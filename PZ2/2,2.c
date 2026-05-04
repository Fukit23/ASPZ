#include <stdio.h>

int a1[1000] = {1};

void f1() {
    int l1[1000];
    int l2[1000] = {1};
}

int main() {
    f1();
    printf("Hello\n");
    return 0;
}