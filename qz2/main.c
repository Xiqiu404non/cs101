#include <stdio.h>
void print_spaces(int r,int rows){
     printf("%*c" , (rows - r) / 2 + 1, 0 );
}
void print_stars(int r){
    printf("*", r);
}

int main()
{   
    int row=5;
    row=row*2-1;
    for(int i = row; i >0; i-=2) {
        print_spaces(i,row);
        for(int j = 0; j < i; ++j)
            print_stars(i);
        printf("\n");
    }
    return 0;
}
