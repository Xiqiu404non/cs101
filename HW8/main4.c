#include<stdio.h> 
void round_func(float f){
    f=f*10;
    float a;
    a=((int)f%10);
    if(a<=4){
        f=(f-a)/10;
        
        printf("%.0f",f);
    }
    else if(a>=5){
        f=(f+10-a)/10;
     
        printf("%.0f",f);
        
    }
}
    
int main(){  
    round_func(1.4);
        return 0;
} 
