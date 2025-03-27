#include <stdio.h>
#include <string.h>

void buffer_overflow() {
    int test = 0;
    char buffer[10];
    strcpy(buffer, "This string is too long for the buffer"); // ❌ Buffer overflow
}

void format_string_vuln(char *input) {
    printf(input); // ❌ Uncontrolled format string
}
