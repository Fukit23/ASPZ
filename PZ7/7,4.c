#include <stdio.h>

int main(int c1, char **v1) {
    int n1 = 0;
    char a1[1024];
    
    for (int i1 = 1; i1 < c1; i1++) {
        FILE *f1 = fopen(v1[i1], "r");
        if (f1) {
            while (fgets(a1, sizeof(a1), f1)) {
                printf("%s", a1);
                n1++;
                if (n1 % 20 == 0) {
                    getchar();
                }
            }
            fclose(f1);
        }
    }
    return 0;
}