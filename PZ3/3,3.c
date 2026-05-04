#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>
#include <signal.h>
#include <unistd.h>
#include <time.h>

void h1(int s) {
    printf("File size limit reached!\n");
    exit(0);
}

int main() {
    struct rlimit r1 = {20, 20};
    setrlimit(RLIMIT_FSIZE, &r1);
    signal(SIGXFSZ, h1);
    
    srand(time(NULL));
    FILE *f1 = fopen("dice.txt", "w");
    
    while(1) {
        fprintf(f1, "%d\n", rand() % 6 + 1);
        fflush(f1);
    }
    
    fclose(f1);
    return 0;
}