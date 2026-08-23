//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main () {
    int num1, num2;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("Sum:%d\n", num1 + num2);
    printf("Difference:%d\n", num1-num2);
    printf("Product:%d\n", num1*num2);
    if(num2 !=0) {
        printf("Quotient:%d\n", num1/num2);
    } else {
        printf("Quotient: Division by zero is not allowed.\n");
    }
    return 0;
    }