#include <stdio.h>

int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if (a>b)
    {
    printf("First number %d is the greatest number.\n",a);
    }
    else if(a<b){
    printf("Second number %d is the greatest number.\n",b);
}
    else{
    printf("Both number are equal.\n");
    }
    return 0;
}