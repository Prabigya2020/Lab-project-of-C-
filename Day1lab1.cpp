#include<iostream>

struct complex
{
    float real;
    float imag;
};

int main()
{
   
    struct complex num1, num2, sum;
    printf("Enter real and imaginary part of first complex number:\n");
    scanf("%f%f", &num1.real, &num1.imag);
    printf("Enter real and imaginary part of second complex number:\n");
    scanf("%f%f", &num2.real, &num2.imag);

    sum.real =num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    printf("SUM = %0.2f + i %0.2f", sum.real, sum.imag);

    return 0;
}
