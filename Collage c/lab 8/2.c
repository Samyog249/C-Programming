#include <stdio.h>
#include <string.h>

int main(){
    char a[50] = "Hello, ";
    char b[50] = "World!";
    printf("Length: %lu\n", strlen(a));
    strcpy(b, a);
    printf("After copy: %s\n", b);
    strcat(a," C");
    printf("Concat : %s\n", a);
    printf("Compare: %d\n", strcmp(a,b));
    return 0;
}