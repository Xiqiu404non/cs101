#include <stdio.h>

int main()
{
    int i=10;
    
    if(i%15==0)
        printf("Love IU");
    
    else if(i%5==0)
        printf("IU");
        
    else if(i%3==0)
        printf("Love");
        
    else
        printf("%d", i);
    
    return 0;
}
