#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <pthread.h>
#include <ctype.h>

int v1 = 0;
int v2 = 0;
pthread_mutex_t m1 = PTHREAD_MUTEX_INITIALIZER;

void* f1(void* p1) {
    char* a1 = (char*)p1;
    FILE* f2 = fopen(a1, "r");
    if (!f2) {
        free(a1);
        return NULL;
    }

    int l1 = 0;
    int w1 = 0;
    int c1;
    int b1 = 0;

    while ((c1 = fgetc(f2)) != EOF) {
        if (c1 == '\n') l1++;
        if (isspace(c1)) {
            b1 = 0;
        } else if (b1 == 0) {
            b1 = 1;
            w1++;
        }
    }

    fclose(f2);
    free(a1);

    pthread_mutex_lock(&m1);
    v1 += l1;
    v2 += w1;
    pthread_mutex_unlock(&m1);

    return NULL;
}

int main(int c2, char** v3) {
    char* d1 = ".";
    if (c2 > 1) d1 = v3[1];

    DIR* d2 = opendir(d1);
    if (!d2) return 1;

    struct dirent* e1;
    pthread_t t1[1024];
    int n1 = 0;

    while ((e1 = readdir(d2)) && n1 < 1024) {
        if (strstr(e1->d_name, ".txt")) {
            char* p2 = malloc(1024);
            snprintf(p2, 1024, "%s/%s", d1, e1->d_name);
            pthread_create(&t1[n1], NULL, f1, p2);
            n1++;
        }
    }
    closedir(d2);

    for (int i1 = 0; i1 < n1; i1++) {
        pthread_join(t1[i1], NULL);
    }

    printf("Total txt files: %d\nLines: %d\nWords: %d\n", n1, v1, v2);
    return 0;
}