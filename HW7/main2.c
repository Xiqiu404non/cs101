#include <stdio.h>
int main() {
    double Pi = 0.0;
    int i = 1;
    for (i = 1; i<500000; i++) {
        if (i & 1)
            Pi += 4.0/(2*i-1);
        else
            Pi -= 4.0/(2*i-1);
        if ((int) (Pi*100000) == 314159)
            break;
    }
    printf("x=%d, Pi=%.5f\n", 2*i-1, (double) (int) (Pi*100000)/100000);
    return 0;
}
