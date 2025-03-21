#include <stdio.h>
#include <string.h>

class Human{
    char *pname;
    int age;
    public:
        Human(){
            pname=new char[1];
            pname[0]='\0';
            age=0;
        }
        Human(const char *name, int a){
            pname=new char[strlen(name)+1];
            strcpy(pname, name);
            age=a;
        }
        Human(const Human &h){
            pname=new char[strlen(h.pname)+1];
            strcpy(pname, h.pname);
            age=h.age;
        }
        ~Human(){
            delete [] pname;
        }
        void OutHuman() const{
            printf("%s, %d\n", pname, age);
        }
};

int main(){
    Human kang("Kang", 20);
    Human boy;
    boy = kang;
    boy.OutHuman();
    
}
