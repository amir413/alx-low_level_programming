#include <stdio>
int main (void){
	srand(time(0)); // Initialize random number generator

    int n = rand() % RAND_MAX; // Generate a random number

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
