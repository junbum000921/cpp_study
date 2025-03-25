#include <stdio.h>

class SomeClass{};

void calc() throw(int){
    SomeClass obj;
    char *p = new char[1000];

    if(true) throw 1;
    delete[] p;
}

int main(){
    try{
        calc();
    }
    catch(int){
        printf("Integer exception occured\n");
    }
}