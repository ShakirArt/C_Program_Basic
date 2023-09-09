#include <stdio.h>

int main() {
    int number1, number2 , addition;
    printf("Enter the real number of Imaginary part of 1st complex numbers : ");
    scanf("%d", &number1);
    printf("Enter the real number of Imaginary part of 2nd complex numbers : ");
    scanf("%d", &number2);
    addition = number2+number1;
    printf("The result is : %di", addition);
    return 0;
}
