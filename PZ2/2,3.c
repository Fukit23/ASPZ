#include <stdio.h>
#include <stdlib.h>

int v1 = 1;
int v2;

void grow() {
    int arr1[10000];
    printf("New stack: %p\n", (void*)&arr1[0]);
}

int main() {
    int l1;
    int *h1 = malloc(sizeof(int));

    printf("Text: %p\n", (void*)main);
    printf("Data: %p\n", (void*)&v1);
    printf("BSS:  %p\n", (void*)&v2);
    printf("Heap: %p\n", (void*)h1);
    printf("Stack:%p\n", (void*)&l1);

    grow();

    free(h1);
    return 0;
}