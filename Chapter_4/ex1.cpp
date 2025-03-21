#include <stdio.h>
#include <string.h>

class Human{
    private: char* name; int age;
    public: 
    Human(){ 
        name = new char[1]; name[0] = '\0'; age = 0; 
    }
    Human(const char* n, int a){
        name = new char[strlen(n)+1]; strcpy(name, n); age = a; 
    }
    void intro_h() const{ 
        printf("%s, %d\n", name, age); 
    }

};
class student: public Human{
    private: int id;
    public: student(const char* n, int a, int i): Human(n, a), id(i){}
    void intro() const { Human::intro_h(); printf("%d\n", id); }
};

int main(){
    student s("Kang", 20, 2019);
    s.intro();
}