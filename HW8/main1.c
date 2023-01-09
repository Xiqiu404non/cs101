#include <stdio.h>
void print_spaces(int r){
    int i;
    for(i = 1;i<=(r*2)-1;i++){
        printf(" ");
    }
    
}

void print_stars(int r, int rows){
    int j;
    for(j = 1;j<=(rows-r)*2+1;j++){
        printf("* ");
    }
    printf("\n");
}

int main() {
    int i;
    int rows = 10;
    for(int i = rows;i>=1;--i){
        print_spaces(i);
        print_stars(i, rows);
    }
    return 0;
}
