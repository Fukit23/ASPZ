#include <stdio.h>
#include <string.h>

int main(int c1, char **v1) {
    if (c1 < 3) return 1;
    
    FILE *f1 = fopen(v1[2], "r");
    char a1[1024];
    
    if (f1) {
        while (fgets(a1, sizeof(a1), f1)) {
            if (strstr(a1, v1[1])) {
                printf("%s", a1);
            }
        }
        fclose(f1);
    }
    return 0;
}