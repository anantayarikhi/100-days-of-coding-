//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int num, firstDigit, lastDigit, numDigits, swappedNum;
    scanf("%d", &num);
    lastDigit = num % 10;
    numDigits = 0;
    for(int i = num; i > 0; i /= 10) {
        numDigits++;
    }
    firstDigit = num / pow(10, numDigits - 1);
    swappedNum = lastDigit;
    for(int i = 1; i < numDigits - 1; i++) {
        swappedNum = swappedNum * 10 + (num / pow(10, numDigits - 1 - i)) % 10;
    }
    swappedNum = swappedNum * 10 + firstDigit;
    printf("%d", swappedNum);
    return 0;
}