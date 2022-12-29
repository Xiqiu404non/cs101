#include <stdio.h>
void print_spaces(int r, int rows){
    int i;
    for(i = 1;i<=(rows-r)*2;i++){
        printf(" ");
    }
    
}

void print_stars(int r){
    int j;
    for(j = 1;j<=r*(2)-1;j++){
        printf("* ");
    }
    printf("\n");
}

int main() {
    int i;
    int rows = 5;
    for(int i = rows;i>=1;--i){
        print_spaces(i, rows);
        print_stars(i);
    }
    return 0;
}