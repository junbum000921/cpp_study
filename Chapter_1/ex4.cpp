#include <stdio.h>
#include <string.h>

class Human{
    private:
        char* pname;
        int age;
    public:
        Human(const char* aname = "jjj", int aage = 555){
            pname=new char[strlen(aname)+1];
            strcpy(pname,aname);
            age = aage;
            printf("Creating %s\n",pname);
        }
        Human(const Human &h){
            pname=new char[strlen(h.pname)+1];
            strcpy(pname,h.pname);
            age = h.age;
            printf("Creating %s\n",pname);
        }
        ~Human(){
            printf("Destroying %s\n",pname);
            delete [] pname;
        }
        void IntroHuman(){
            printf("name = %s, age = %d\n",pname,age);
        }
};
void printHuman(Human h){
    h.IntroHuman();
}
int main(void){
    Human kim("kim", 20);
    Human a=kim;
    printHuman(kim);
    printHuman(a);
 
    return 0;
}