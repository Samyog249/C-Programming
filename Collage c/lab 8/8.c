#include <stdio.h>

void concatenateStrings(char *str1, char *str2, char *result) {
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';
}
int main() {
    char str1[50] = "Samyog ";
    char str2[50] = "Ghimire";
    char result[100];
    concatenateStrings(str1, str2, result);
    printf("Combined string: %s\n", result);
    return 0;
}