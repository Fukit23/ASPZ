#include <stdio.h>
#include <time.h>
#include <stdint.h>

int main() {
    time_t t1 = 2147483647;
    printf("%zu\n", sizeof(time_t));
    printf("%s", ctime(&t1));
    return 0;
}