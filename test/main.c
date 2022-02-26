#include <stdio.h>
int main(void){
    int *ptr;

    {
        // New scope
        int tmp[5]={1,2,3,4,5};
        ptr = tmp; // Just to see if the memory is cleared
    }

    //printf("tmp = %d", tmp); // Compile-time error (as expected)
    printf("ptr = %d\n", *ptr);

    return 0;
}