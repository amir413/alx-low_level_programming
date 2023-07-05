#include <stdio.h>

void _puts_recursion(char *s) {
    if (*s == '\0') {  // Check if the current character is the null terminator
        putchar('\n');  // Print a new line
        return;
    }

    putchar(*s);  // Print the current character
    _puts_recursion(s + 1);  // Recursively call _puts_recursion with the next character
}

