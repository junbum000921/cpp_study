#include <stdio.h>
#include <string.h>
struct Human{
    private:
        char* pname;
        int age;
    public:
        Human(const char* aname = "", int aage = 0){
            pname=new char[strlen(aname)+1];
            strcpy(pname,aname);
            age = aage;
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

int main(void){
    Human kim("kim", 20);
    Human a;
    kim.IntroHuman();
    a.IntroHuman();
 
    return 0;
}
