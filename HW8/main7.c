#include<stdio.h>


int main(){  
    int a=-999;
    int b=999;
    int c,d;
    int e=-a;
    c=(a/100)+(e/10-e/100*10)+(e-e/100*100-(e/100*10));
    d=(b/100)+(b/10-b/100*10)+(b-b/100*100-(b/100*10));
    printf("a=%d\nb=%d",c,d);
    return 0;
} 
