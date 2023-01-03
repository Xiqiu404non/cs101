 #include<stdio.h>


int main(){  
    int i=4;
    for(int a=i;a>0;a--){
        for(int c=i;c>a;c--){
            printf(" ");   
        }
        for(int b=0;b<a*2-1;b++){
            printf("*");
        }
        printf("\n");
    }
    for(int d=i-1;d>0;d--){
        for(int e=d;e>1;e--){
            printf(" ");
        }
        for(int f=i*2+1;f>d*2;f--){
            printf("*");
        }
    printf("\n");
    }
    return 0;
} 
