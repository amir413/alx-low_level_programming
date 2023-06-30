#include <stdlib.h>
#include <string.h>

char* rot13(char* str) {
    int length = strlen(str);
    char* encoded = (char*)malloc((length + 1) * sizeof(char));

    for (int i = 0; i < length; i++) {
        char c = str[i];

        if ((c >= 'A' && c <= 'Z')) {
            encoded[i] = ((c - 'A' + 13) % 26) + 'A';
        } else if ((c >= 'a' && c <= 'z')) {
            encoded[i] = ((c - 'a' + 13) % 26) + 'a';
        } else {
            encoded[i] = c;
        }
    }

    encoded[length] = '\0';
    return encoded;
}

