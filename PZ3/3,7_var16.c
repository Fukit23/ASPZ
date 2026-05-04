#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>

int main() {
    system("ulimit -a");
    printf("\n--- Testing Open Files Limit ---\n");
    
    struct rlimit r1;
    getrlimit(RLIMIT_NOFILE, &r1);
    r1.rlim_cur = 10;
    setrlimit(RLIMIT_NOFILE, &r1);
    
    FILE *f1[20];
    for(int i = 0; i < 20; i++) {
        f1[i] = fopen("/dev/null", "r");
        if(!f1[i]) {
            printf("Limit reached. Failed to open file descriptor #%d\n", i);
            break;
        }
    }
    
    return 0;
}