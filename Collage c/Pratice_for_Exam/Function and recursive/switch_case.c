#include <stdio.h>

int main(){
    float a,b;
    char op;
    printf("Enter first number:",a);
    scanf("%f", &a);
    printf("Enter the second number:",b);
    scanf("%f",&b);
    printf("Enter your operator(+ - / * ):");
scanf("%s", &op);
    switch (op)
    {
    case '+':
    printf("The sum of %.2f and %.2f is:%.2f",a,b,a+b);
    break;
    case '-':
    printf("The sub of %.2f and %.2f is:%.2f",a,b,a-b);
    break;
    case '/':
    if (b !=0)
    {
       printf("The divide of %.2f and %.2f is:%.2f",a,b,a/b);
    }
    else printf("Division by zero is invalide!");
    break;
    case '*':
    printf("The multiply of %.2f and %.2f is:%.2f",a,b,a*b);
    break;
    default:
    printf("Please enter valid operator.");
        break;
    }
    return 0;
}