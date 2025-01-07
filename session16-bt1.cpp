#include <stdio.h>

int main() {
    int a = 10;
    int* ptr = &a;

    printf("gia tri cua bien a : %d\n", a);     
    printf("Gia tri cua bien a : %d\n", *ptr);     
    
    printf("Dia chi cua bien a : %p\n", &a );     
    printf("Dia chi cua bien a : %p\n", ptr);    
    return 0;
}

