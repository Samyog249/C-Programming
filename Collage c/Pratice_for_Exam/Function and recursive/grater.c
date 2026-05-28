#include<stdio.h>
int Gre(int a,int b);
int main(){
    int a , b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("\nEnter the second number:");
    scanf("%d",&b);
    c = Gre(a,b);
    printf("\nThe gretest number is %d",c);
    return 0;
}
int Gre(int a,int b){
    if(a>b)
    return (a);
    else return (b);
}