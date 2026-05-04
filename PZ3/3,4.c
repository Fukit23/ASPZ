#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>
#include <signal.h>
#include <time.h>

void h1(int s) {
    printf("CPU time limit exceeded!\n");
    exit(0);
}

int main() {
    struct rlimit r1 = {1, 1};
    setrlimit(RLIMIT_CPU, &r1);
    signal(SIGXCPU, h1);
    
    srand(time(NULL));
    
    while(1) {
        int a = rand() % 49 + 1;
        int b = rand() % 36 + 1;
    }
    
    return 0;
}