#include<stdio.h>

void print_star(int z){
    for (int i=0;i<z;i++){
        for(int a=6;a>i;a--){
            printf(" ");
        }
        for(int b=0;b<=i*2;b++){
            printf("*");
        }
        printf("\n");
    }
}

void print_truck(){
    for(int d=0;d<5;d++){
        for(int c=0;c<6;c++){
            printf(" ");
        }
        printf("*\n");
    }
}
int main(){  
    //print_top
    printf("  X'mas tree\n");
    print_star(3);
    print_star(5);
    print_star(7);
    print_truck();
    return 0;
} 
