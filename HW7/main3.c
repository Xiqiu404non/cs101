#include <stdio.h>
int main() {
    int n = 81, i, b = 1, line;
    for (i = 0; i<n; i++){
        line = i/9 + 1;
        b = (i % 9) + 1;
        printf("%d*%d=%d\t", line ,b , line*b);
        if (b == 9)
            printf("\n");
    }
    return 0;
}
