#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(void *a, void *b){
    void *temp = malloc(sizeof(a));
    memcpy(temp, a, sizeof(a));
    memcpy(a, b, sizeof(a));
    memcpy(b, temp, sizeof(a));
    free(temp);
}
    
int main(){
    int a = 3, b = 4;
    double c = 3.3, d = 4.4;
    swap(&a, &b);
    swap(&c, &d);
    printf("a = %d, b = %d\n", a, b);
    printf("c = %f, d = %f\n", c, d);
    return 0;
}