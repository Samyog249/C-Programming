#include <stdio.h>
void namestha();
void bonjour();
int main(){
    printf("Enter n for nepali and f for france:");
char ch;
scanf("%c",&ch);
if (ch== 'n')
{
namestha();
} else bonjour();

    return 0;
}
void namestha(){
    printf("You are Nepali.");
}
void bonjour(){
    printf("You are france");
}