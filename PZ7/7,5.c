#include <stdio.h>
#include <dirent.h>
#include <string.h>

void f1(char *p1) {
    DIR *d1 = opendir(p1);
    struct dirent *v1;
    char a1[1024];
    
    if (!d1) return;
    
    while ((v1 = readdir(d1))) {
        if (strcmp(v1->d_name, ".") && strcmp(v1->d_name, "..")) {
            printf("%s/%s\n", p1, v1->d_name);
            if (v1->d_type == DT_DIR) {
                sprintf(a1, "%s/%s", p1, v1->d_name);
                f1(a1);
            }
        }
    }
    closedir(d1);
}

int main() {
    f1(".");
    return 0;
}