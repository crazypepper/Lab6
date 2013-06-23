/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Description: Prompts the user for two numbers and prints their gcd.         *
 *                                                                             *
 * Written by Eric Martin for COMP9021                                         *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <p_io.h>
#include <stdio.h>
#include <stdlib.h>

unsigned long long gcd(const unsigned long long, const unsigned long long);

int main(void) {
    unsigned long long nb1, nb2;
    do
        p_prompt("Input two integers: ", "%llu %llu", &nb1, &nb2);
    while (nb1 == 0 && nb2 == 0 &&
           printf("One number at least should not be equal to 0\n"));
    printf("The gcd of %llu and %llu is %llu.\n", nb1, nb2, gcd(nb1, nb2));
    return EXIT_SUCCESS;
}

unsigned long long gcd(const unsigned long long nb1, const unsigned long long nb2) {
    if (nb2 == 0)
        return nb1;
    if (nb1 >= nb2)
        return gcd(nb2, nb1 % nb2);
    return gcd(nb2, nb1);
}

    

