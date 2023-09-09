#include <stdio.h>

int main() {
    int length, hight, area, perimeter;
    printf("Enter the length : ");
    scanf("%d", &length);
    printf("Enter the hight : ");
    scanf("%d", &hight);
    area = length*hight;
    perimeter = 2*(length+hight);
    printf("Area of the rectangle : %d\n", area);
    printf("Perimeter of the rectangle : %d", perimeter);
    return 0;
}
