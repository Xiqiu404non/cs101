#include <stdio.h>

int main()
{
        int n=7, i=0, j=0;
        char c=' ';
        for(i=1; i<=n; i++){
            printf("%*c", n-i+1, ' ');
            for(j=1; j<=i ;j++){
                printf("%d ", i);
            }
            printf("\n");
        }
    return 0;
}
