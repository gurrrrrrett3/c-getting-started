# include <stdio.h>

int main() {

    // find all prime numbers between 1 and 1 million

    // declare variables
    int i, j, k;
    int prime_numbers[100000];
    int prime_numbers_count = 0;

    // loop through all numbers between 1 and 1 million

    for (i = 2; i <= 100000; i++) {

        // loop through all numbers between 2 and i
        for (j = 2; j <= i; j++) {

            // if i is divisible by j, break out of the loop
            if (i % j == 0) {
                break;
            }

            // if j is equal to i - 1, then i is a prime number
            if (j == i - 1) {
                prime_numbers[prime_numbers_count] = i;
                prime_numbers_count++;
            }
        }
    }

    // print all prime numbers
    for (k = 0; k < prime_numbers_count; k++) {
        printf("%d\n", prime_numbers[k]);
    }

    return 0;
}