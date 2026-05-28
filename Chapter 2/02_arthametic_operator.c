#include <stdio.h>

int main(){
    int a = 6;
    int b = 3;
    int c = a + b;
    printf("The value of a is %d and value of b is %d and sum is %d\n", a, b, c); 
    // Modulus operator is use to get the reminder 
    printf("The remender when a is divided by b is: %d", a%b);
// This does not work for exponentation in c
// int d = a ^ b;
    return 0;
}