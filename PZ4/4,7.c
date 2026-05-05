#include <stdlib.h>

struct sbar {
    int a;
};

int main() {
    struct sbar *p1 = calloc(1000, sizeof(struct sbar));
    struct sbar *p2 = reallocarray(p1, 500, sizeof(struct sbar));
    free(p2);
    return 0;
}