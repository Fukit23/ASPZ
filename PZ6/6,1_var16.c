#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct S1 {
    int v1;
};

void* f1(void *p1) {
    struct S1 *p2 = (struct S1 *)p1;
    for (int v1 = 0; v1 < 100000; v1++) {
        p2->v1++;
    }
    return NULL;
}

int main() {
    struct S1 *p1 = malloc(sizeof(struct S1));
    p1->v1 = 0;
    
    pthread_t v1, v2;
    pthread_create(&v1, NULL, f1, p1);
    pthread_create(&v2, NULL, f1, p1);
    
    pthread_join(v1, NULL);
    pthread_join(v2, NULL);
    
    printf("%d\n", p1->v1);
    free(p1);
    return 0;
}