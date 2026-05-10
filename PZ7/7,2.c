#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>

int main() {
    DIR *d1 = opendir(".");
    struct dirent *v1;
    struct stat v2;
    
    if (d1) {
        while ((v1 = readdir(d1))) {
            stat(v1->d_name, &v2);
            printf("%o\t%d\t%d\t%lld\t%s\n", 
                   v2.st_mode & 0777, v2.st_uid, v2.st_gid, 
                   (long long)v2.st_size, v1->d_name);
        }
        closedir(d1);
    }
    return 0;
}