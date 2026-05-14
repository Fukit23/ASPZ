#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t p1 = fork();
    
    if (p1 == 0) {
        sleep(3);
        exit(1);
    }
    
    pid_t p2 = fork();
    
    if (p2 == 0) {
        sleep(1);
        exit(2);
    }
    
    int s1;
    waitpid(p1, &s1, 0);
    printf("Waited specific child: %d\n", p1);
    
    return 0;
}