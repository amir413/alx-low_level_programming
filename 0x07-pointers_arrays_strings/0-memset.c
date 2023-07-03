#include <stdio.h>

char *_memset(char *s, char b, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        s[i] = b;
    }
    return s;
}

int main() {
    char str[10] = "Hello";

    printf("Before memset: %s\n", str);

    _memset(str, 'A', 5);

    printf("After memset: %s\n", str);

    return 0;
}

