#include <stdio.h>

#define SIZE 10

int main() {
    int table[SIZE][SIZE];
    int i, j;

    // Generate the multiplication table
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            table[i][j] = i * j;
        }
    }

    // Print the multiplication table
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%02d, ", table[i][j]);
        }
        printf("\n");
    }

    return (0);
}

