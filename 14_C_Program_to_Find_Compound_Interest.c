#include <stdio.h>
#include <math.h>

int main() {
    float principal, n_yers, interest_rate, amount, compound_interest, cal_rate;
    printf("Enter the main balance ");
    scanf("%f", &principal);
    printf("Enter the time in year ");
    scanf("%f", &n_yers);
    printf("Enter the interest rate in percentage ");
    scanf("%f", &interest_rate);
    cal_rate = 1 + (interest_rate/100);
    amount = principal*pow(cal_rate,n_yers);
    compound_interest = amount-principal;
    printf("The compound interest is %f", compound_interest);
    return 0;
}

