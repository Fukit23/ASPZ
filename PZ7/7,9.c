#include <stdio.h>
#include <sys/time.h>

int main() {
    struct timeval t1, t2;
    
    gettimeofday(&t1, NULL);
    for (volatile int v1 = 0; v1 < 10000000; v1++); 
    gettimeofday(&t2, NULL);
    
    long long m1 = (t2.tv_sec - t1.tv_sec) * 1000LL + (t2.tv_usec - t1.tv_usec) / 1000LL;
    printf("%lld ms\n", m1);
    return 0;
}