#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
        char keyword[20];
        int frequency;
} Data;

int compareMulti(const void *a, const void *b) {
        Data *da = (Data *)a;
        Data *db = (Data *)b;
        int res = strcmp(da->keyword, db->keyword);
        if (res == 0) {
                return da->frequency - db->frequency;
        }
        return res;
}

int main() {
        Data arr[] = {
                {"apple", 5},
                {"banana", 2},
		{"apple", 3},
		{"banana", 8}
        };
        int n = sizeof(arr) / sizeof(arr[0]);

        qsort(arr, n, sizeof(Data), compareMulti);

        Data key;
        printf("Enter keyword to search: ");
        scanf("%19s", key.keyword);
        printf("Enter frequency: ");
        scanf("%d", &key.frequency);

        Data *item = bsearch(&key, arr, n, sizeof(Data), compareMulti);

        if (item != NULL) {
                printf("Found: %s, %d\n", item->keyword, item->frequency);
        } else {
                printf("Not found\n");
        }

        return 0;
}