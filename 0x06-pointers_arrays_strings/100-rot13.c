#include <stdlib.h>
#include <string.h>

char* rot13(char* str) {
    int length = strlen(str);
    char* encoded = (char*)malloc((length + 1) * sizeof(char));

    for (int i = 0; i < length; i++) {
        char c = str[i];

        if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
            encoded[i] = c + 13;
        else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
            encoded[i] = c - 13;
        else
            encoded[i] = c;
    }

    encoded[length] = '\0';
    return encoded;
}

