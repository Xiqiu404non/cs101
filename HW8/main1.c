#include <stdio.h>

int main(){
    int number=10;
    int a;
    for(int i=1;i<number;i++){
        for(int n=number;n>i;n--){
            printf(" ");
        }
        for(a=1;a<=i;a++){
            printf("* ");
        }
        
         printf("\n");
    }    
}
