#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int c1, char **v1) {
    srand(time(NULL));
    
    float f1 = (float)rand() / RAND_MAX;
    printf("0.0 to 1.0: %f\n", f1);
    
    if (c1 > 1) {
        float n1 = atof(v1[1]);
        float f2 = ((float)rand() / RAND_MAX) * n1;
        printf("0.0 to %f: %f\n", n1, f2);
    }
    
    return 0;
}