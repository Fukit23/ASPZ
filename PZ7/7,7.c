#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>

int main() {
    DIR *d1 = opendir(".");
    struct dirent *v1;
    char c1;
    
    if (d1) {
        while ((v1 = readdir(d1))) {
            if (strstr(v1->d_name, ".c")) {
                printf("Add read perm for others to %s? (y/n): ", v1->d_name);
                scanf(" %c", &c1);
                if (c1 == 'y') {
                    struct stat s1;
                    stat(v1->d_name, &s1);
                    chmod(v1->d_name, s1.st_mode | S_IROTH);
                }
            }
        }
        closedir(d1);
    }
    return 0;
}