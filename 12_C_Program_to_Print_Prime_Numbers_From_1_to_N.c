#include <stdio.h>
int main() {
    int n, i, j;
    int flag = 0;
    printf("Set the range : 1 to ");
    scanf("%d", &n);
    for(i=2; i<=n; i++){
            for(j=2; j<=i/2; j++) {
                if(i%j==0) {
                    flag=1;
                    break;
                }
            }
            if (flag==0) {
                printf("%d\n", i);
            }
            flag=0;
    }
    return 0;
}

