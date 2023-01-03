#include<stdio.h>  
void get_binary(int n,){  
     int r;  
     r = n % 2;  
     if(n >= 2)  
        get_binary(n/2);
     printf("%d",r);  
}  

int main(void){  
        int num=6;  
        get_binary(num);  
        printf("\n");
    return 0;   
} 
