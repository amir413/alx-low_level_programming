#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

char* rot13(char* str) {
    int length = strlen(str);
    char* encoded = (char*)malloc((length + 1) * sizeof(char));

    for (int i = 0; i < length; i++) {
        char c = str[i];
        char base = (c >= 'a' && c <= 'z') ? 'a' : (c >= 'A' && c <= 'Z') ? 'A' : '\0';

        if (base != '\0') {
            encoded[i] = ((c - base + 13) % 26) + base;
        } else {
            encoded[i] = c;
        }
    }

    encoded[length] = '\0';
    return encoded;
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    char* encoded = rot13(str);
    printf("Encoded string: %s\n", encoded);

    free(encoded);
    return 0;
}

