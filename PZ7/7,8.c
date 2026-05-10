#include <stdio.h>
#include <dirent.h>
#include <unistd.h>
#include <string.h>

int main() {
    DIR *d1 = opendir(".");
    struct dirent *v1;
    char c1;
    
    if (d1) {
        while ((v1 = readdir(d1))) {
            if (strcmp(v1->d_name, ".") && strcmp(v1->d_name, "..")) {
                printf("Delete %s? (y/n): ", v1->d_name);
                scanf(" %c", &c1);
                if (c1 == 'y') {
                    unlink(v1->d_name);
                }
            }
        }
        closedir(d1);
    }
    return 0;
}