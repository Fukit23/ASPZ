#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void f1(int v1) {
}

int main() {
    struct sigaction a1;
    a1.sa_handler = f1;
    sigemptyset(&a1.sa_mask);
    a1.sa_flags = 0;
    sigaction(SIGUSR1, &a1, NULL);
    sigaction(SIGUSR2, &a1, NULL);

    sigset_t s1, s2;
    sigemptyset(&s1);
    sigaddset(&s1, SIGUSR1);
    sigaddset(&s1, SIGUSR2);
    sigprocmask(SIG_BLOCK, &s1, NULL);

    raise(SIGUSR1);
    raise(SIGUSR2);

    sigpending(&s2);
    for (int v1 = 1; v1 < 32; v1++) {
        if (sigismember(&s2, v1)) {
            printf("%d pending\n", v1);
        }
    }

    siginfo_t i1;
    int v2 = sigwaitinfo(&s1, &i1);
    if (v2 > 0) {
        printf("%d processed\n", v2);
    }

    return 0;
}