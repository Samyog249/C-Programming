#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char line[100];
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);
    for (int i = 0; line[i] != '\0'; i++) {
        line[i] = toupper(line[i]);
    }
    printf("Uppercase: %s", line);
    
    return 0;
}