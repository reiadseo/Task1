#include <stdio.h>
int main() {

    int x = 5;
    
    printf("value of x = %d\n", x);
    printf("address of x = %u\n", &x);
    
    int *ptr;
    
    ptr = &x;
    
    printf("%d\n", x);
    printf("%d\n", &x);
    printf("%d\n", ptr);
    printf("%d\n", *ptr);

}