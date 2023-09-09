#include <stdio.h>

int main() {
    char first_name[20], second_name[20];
    printf("Enter the name : ");
    scanf("%s%s", &first_name, &second_name);
    printf("The name : %s %s", first_name, second_name);
    return 0;
}

