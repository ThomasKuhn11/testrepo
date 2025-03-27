#include <stdlib.h>
#include <stdio.h>

void test_use_after_free() {
    char *data = malloc(10);
    if (!data) return;
    free(data);
    printf("%c\n", data[0]); // ❌ Use-after-free
}

void test_double_free() {
    char *ptr = malloc(20);
    if (!ptr) return;
    free(ptr);
    free(ptr); // ❌ Double free
}
