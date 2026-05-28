#include <stdio.h>

int main(){
    float amount, discount,net;
    printf("Enter purchase amount: ");
    scanf("%f", &amount);
    if (amount>=1000)
    discount = 0.5 * amount;
    else 
    discount = 0.3 * amount;

    net = amount - discount;
    printf("Discount is %.2f\nNet amount is %.2f",discount,net);
    
    return 0;
}