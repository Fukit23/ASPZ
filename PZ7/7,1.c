#include <stdio.h>

int main() {
    FILE *f1 = popen("rwho", "r");
    FILE *f2 = popen("more", "w");
    char v1[256];
    
    if (f1 && f2) {
        while (fgets(v1, sizeof(v1), f1)) {
            fputs(v1, f2);
        }
    }
    
    if (f1) pclose(f1);
    if (f2) pclose(f2);
    return 0;
}