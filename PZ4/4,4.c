#include <stdlib.h>

int main() {
    void *p1 = NULL;
    int v1 = 2;

    while (v1 > 0) {
        if (!p1) {
            p1 = malloc(10);
        }
        
        free(p1);
        p1 = NULL;
        
        v1--;
    }
    return 0;
}