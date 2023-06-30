#include <stdlib.h>
#include <string.h>

char* rot13(char* str) {
    char* encoded = strdup(str);  // Create a copy of the input string

    for (int i = 0; encoded[i] != '\0'; i++) {
        char c = encoded[i];

        if ((c >= 'A' && c <= 'Z')) {
            encoded[i] = ((c - 'A' + 13) % 26) + 'A';
        } else if ((c >= 'a' && c <= 'z')) {
            encoded[i] = ((c - 'a' + 13) % 26) + 'a';
        }
    }

    return encoded;
}

