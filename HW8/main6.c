#include<stdio.h>


int main(){  
    int n=4;
    for(int a=0;a<n;a++){
        for(int b=a;b<n-1;b++){
            printf(" ");
        }    
            for(int c=0;c<=a*2;c++){
                printf("*");
            }
        printf("\n");
    }
    for(int e=0;e<n*2-1;e++){
        printf("*");
    }
    printf("\n");
    
    for(int f=0;f<n;f++){
        printf("*");
        for(int g=0;g<n+1;g++){
            printf(" ");
        }
        printf("*\n");
    }
    for(int h=0;h<n*2-1;h++){
        printf("*");
    }
    return 0;
} 
