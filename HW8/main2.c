#include<stdio.h>  
int main(){  
    int i=15;
    int k=128;
    int total=0;
    
    
    while(1){
        if((i/k)==1){
            total=total+1;
            i=i-k;
            k=k/2;
        }
        else if(i/k==0){
            k=k/2;
        }
        else if(k==0) {
            break;
        }
    }    
    printf("%d\n",total);
    
    return 0;
} 
