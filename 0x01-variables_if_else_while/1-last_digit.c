#include <stdio>

int main() {
    srand(time(0));

    int n = rand() % RAND_MAX;

    printf("The number %d is ", n);

    if (n > 0) {
        printf("positive");
    } else if (n == 0) {
        printf("zero");
    } else {
        printf("negative");
    }

    printf("\n");

    return 0;
}

