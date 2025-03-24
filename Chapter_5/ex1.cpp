#include <stdio.h>
#include <string.h>

class Human{
    protected:
        char name[12];
        int age;
    public:
        Human(){}
        Human(const char *aname, int aage){
            strcpy(name, aname);
            age=aage;
        }
        void intro(){
            printf("Name : %s, Age : %d\n",name, age);
        }
        void changeName(const char *aname){
            strcpy(name, aname);
        }
};

class Student : public Human{
    protected:
        int stdnum;
    public:
        Student(){}
        Student(const char *aname, int aage, int astdnum):Human(aname, aage){
            stdnum=astdnum;
        }
        void intro(){
            printf("Name : %s, Age : %d, Student Number : %d\n",name, age, stdnum);
        }
        void study(){
            printf("Study\n");
        }
        void changeStdnum(int astdnum){
            stdnum=astdnum;
        }
};

int main(){
    Human h1("Kim", 20);
    Student s1("Lee", 21, 20180001);
    h1.intro();
    s1.intro();
    s1.study();
    Human *ph;
    Student *ps;
    Student s2 = s1;
    s2.intro();
    s2.changeStdnum(20180002);
    ph=&s1;
    ph->intro();
    s2.intro();
    ps=(Student *)ph;
    ps->study();
    s1.intro();
    Human h2;
    h2=s1;
    h2.intro();
    h2.changeName("Park");
    h2.intro();
    h2=h1;
    h2.intro();
    return 0;
}