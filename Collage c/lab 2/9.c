#include <stdio.h>

int main(){
    int a = 5, b=2;
    float r;
    r = a/b;
    printf("Implicit: %f\n",r);
    r = (float)a/b;
    printf("Explicit: %f",r);
    return 0;
}