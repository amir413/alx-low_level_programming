#include "main.h"

void print_number(int n) {
    if (n == 0) {
        _putchar('0');
        return;
    }

    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    int reversed = 0;
    while (n > 0) {
        reversed = (reversed * 10) + (n % 10);
        n /= 10;
    }

    while (reversed > 0) {
        _putchar('0' + (reversed % 10));
        reversed /= 10;
    }
}

