#include <stdio.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/fs.h>
#include <sys/stat.h>

int main(int c1, char **v1) {
    if (c1 < 2) return 1;
    
    int f1 = open(v1[1], O_RDONLY);
    struct stat s1;
    fstat(f1, &s1);
    
    int b1 = s1.st_size / 4096 + 1;
    int n1 = 0, p1 = 0;
    
    for (int i1 = 0; i1 < b1; i1++) {
        int a1 = i1;
        if (ioctl(f1, FIBMAP, &a1) == 0 && a1) {
            if (p1 && a1 != p1 + 1) n1++;
            p1 = a1;
        }
    }
    
    printf("Frag level: %d breaks\n", n1);
    return 0;
}