#include <stdio.h>

int main()
{
    int i=10;
    if (i==1)
        printf("1 is true");
    if (i%2==0&&(i/2)%2==0)
        printf("%d is true", i);
    else
        printf("%d is false", i);
    return 0;
}
