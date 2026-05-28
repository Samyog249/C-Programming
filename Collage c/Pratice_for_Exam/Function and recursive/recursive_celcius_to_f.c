#include <stdio.h>
float far(float n);
int main (){
    float n, cel;
    printf("Enter the celcious:");
    scanf("%f",&n);
    cel = far(n);
    printf("The f is :%f", cel);
    return 0;
}
float far(float n){
float f = n * (9.0/5.0)+32;
return f;
}
