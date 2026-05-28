#include <stdio.h>
#include<string.h>

int main(){
char string[100];
printf("Enter the string first:");
gets(string);
strrev(string);
printf("String after Reverse is:\n%s",string);   
    return 0;
} 