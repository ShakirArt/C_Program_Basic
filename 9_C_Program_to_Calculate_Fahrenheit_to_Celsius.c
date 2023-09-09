#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter the temperature in Fahrenheit : ");
    scanf("%f", &fahrenheit);
    celsius = (((fahrenheit-32)/9)*5);
    printf("The temperature in Celsius : %f", celsius);
    return 0;
}

