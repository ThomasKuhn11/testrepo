#include <stdlib.h>

void memory_leak() {
    char *leak = malloc(100); // ❌ Memory leak: never freed
    // Forgot: free(leak);
}
