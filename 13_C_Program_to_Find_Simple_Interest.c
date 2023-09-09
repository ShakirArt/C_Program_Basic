#include <stdio.h>

int main() {
    float principal, n_yers, interest_rate, simple_interest;
    printf("Enter the main balance : ");
    scanf("%f", &principal);
    printf("Enter the time in year : ");
    scanf("%f", &n_yers);
    printf("Enter the interest rate in percentage : ");
    scanf("%f", &interest_rate);
    simple_interest = principal*n_yers*interest_rate*0.01;
    printf("The simple interest : %f", simple_interest);
    return 0;
}
