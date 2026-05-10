#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

int f1(const struct dirent *v1) {
    return v1->d_type == DT_DIR;
}

int main() {
    struct dirent **v1;
    int n1 = scandir(".", &v1, f1, alphasort);
    
    if (n1 >= 0) {
        for (int i1 = 0; i1 < n1; i1++) {
            printf("%s\n", v1[i1]->d_name);
            free(v1[i1]);
        }
        free(v1);
    }
    return 0;
}