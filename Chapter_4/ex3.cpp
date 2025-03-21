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
class Student : public Human{
    private: int id;
    public:
        Student(const char* n, int a, int i): Human(n, a), id(i){}
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
class Graduate : public Student{
    protected: char thesis[32];
    public:
        Graduate(const char *n, int a, int i, const char *t): Student(n, a, i){
            strcpy(thesis, t);
        }
        void research(){
            printf("Research : %s\n", thesis);
        }

};

int main(){
    Student s("Kang", 20, 2019);
    s.intro();
    s.study();
    s.report();
    Graduate g("bjbj", 25, 2020, "Imbedded System");
    g.intro();
    g.study();
    g.report();
    g.research();
}