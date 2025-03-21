#include <stdio.h>
#include <string.h>

class Human{
    protected: char name[20]; int age;
    public:
        Human(const char* n, int a){
            strcpy(name, n); age = a;
        }
        void intro() const{
            printf("%s, %d\n", name, age);
        }
};
class Strudent : public Human{
    private: int id;
    public:
        Strudent(const char* n, int a, int i): Human(n, a), id(i){}
        void intro() const{//method overriding
            printf("%s, %d, %d\n", name, age, id);
        }
        void study(){
            printf("Study\n");
        }
        void report(){
            printf("%s send the report.\n", name, age, id);
        }
};

int main(){
    Strudent s("Kang", 20, 2019);
    s.intro();
    s.study();
    s.report();
}