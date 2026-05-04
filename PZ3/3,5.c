#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void h1(int s) {
    printf("File size limit exceeded while writing\n");
    exit(1);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Program need two arguments\n");
        return 1;
    }
    
    FILE *f1 = fopen(argv[1], "r");
    if (!f1) {
        printf("Cannot open file %s for reading\n", argv[1]);
        return 1;
    }
    
    FILE *f2 = fopen(argv[2], "w");
    if (!f2) {
        printf("Cannot open file %s for writing\n", argv[2]);
        fclose(f1);
        return 1;
    }
    
    signal(SIGXFSZ, h1);
    
    int c1;
    while ((c1 = fgetc(f1)) != EOF) {
        fputc(c1, f2);
    }
    
    fclose(f1);
    fclose(f2);
    return 0;
}