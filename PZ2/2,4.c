#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void bar_is_now_closed(void) {
    int l1 = 5;
    printf("%s %p\n", __FUNCTION__, (void*)&l1);
    pause();
}

static void bar(void) {
    int l1 = 5;
    printf("%s %p\n", __FUNCTION__, (void*)&l1);
    bar_is_now_closed();
}

static void foo(void) {
    int l1 = 5;
    printf("%s %p\n", __FUNCTION__, (void*)&l1);
    bar();
}

int main() {
    int l1 = 5;
    printf("%s %p\n", __FUNCTION__, (void*)&l1);
    foo();
    exit(0);
}