#include <stdio.h>

void add(float a, float b, float c, float d)
{
    printf("Addition = %.2f + %.2fi\n", a+c, b+d);
}

void subtract(float a, float b, float c, float d)
{
    printf("Subtraction = %.2f + %.2fi\n", a-c, b-d);
}

void multiply(float a, float b, float c, float d)
{
    float real, imag;

    real = a*c - b*d;
    imag = a*d + b*c;

    printf("Multiplication = %.2f + %.2fi\n", real, imag);
}

void divide(float a, float b, float c, float d)
{
    float real, imag, den;

    den = c*c + d*d;

    real = (a*c + b*d) / den;
    imag = (b*c - a*d) / den;

    printf("Division = %.2f + %.2fi\n", real, imag);
}

int main()
{
    float a,b,c,d;

    printf("Enter first complex number (real imag): ");
    scanf("%f %f",&a,&b);

    printf("Enter second complex number (real imag): ");
    scanf("%f %f",&c,&d);

    add(a,b,c,d);
    subtract(a,b,c,d);
    multiply(a,b,c,d);
    divide(a,b,c,d);

    return 0;
}
