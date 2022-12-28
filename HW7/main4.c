#include <stdio.h>
int main() {
    int i = 12345, a, b, num;
    a = (i/1000) - ((int)((i/1000)/10))*10;
    b = i - ((int)(i/10))*10;
    num = i - a*1000 -b +  b*1000 +a;
    printf("%d",num);
    return 0;
}
