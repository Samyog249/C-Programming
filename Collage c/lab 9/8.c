#include<stdio.h>
#include <string.h>
int main(){
    char str[]="Hello World";
    char *ptr = str;
    printf("String using array syntax: %s\n", str);
    printf("String using pointer: ");
    while (*ptr != '\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}