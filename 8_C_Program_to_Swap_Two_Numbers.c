#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the 1st number : ");
    scanf("%d", &x);
    printf("Enter the 2nd number : ");
    scanf("%d", &y);
    y = x+y;
    x = y-x;
    y = y-x;
    printf("x : %d\ny : %d",x,y);
    return 0;
}


