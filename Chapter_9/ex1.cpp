#include <stdio.h>

int value;
namespace A{
    int value;
}

int main(){
    int value;
    A::value=12;
    value=1;
    ::value=3;
}
