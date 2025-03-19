#include <stdio.h>

class Some{
    public:
    const int total;
    Some(int atotal):total(atotal){}
    void OutTotal(){
        printf("total = %d\n",total);
    }
};

int main(){
    Some S(10);
    S.OutTotal();
    return 0;
}