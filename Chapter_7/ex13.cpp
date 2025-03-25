#include <stdio.h>

int main(){
    int num;
    try{
        scanf("%d", &num);
        if(num < 1 || num > 100){
            throw num;
        }
        printf("%d is beetwen 1 and 100\n", num);
    }   
    catch(int a){
        printf("%d is not beetwen 1 and 100\n", a);
    }
}