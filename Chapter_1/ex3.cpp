#include <stdio.h>
class Time{
    private:
        int hour,min,sec;
    public:
        Time(int h, int m, int s){
            hour = h;
            min = m;
            sec = s;
        }
        Time(int abssec){
            hour = abssec/3600;
            min = (abssec%3600)/60;
            sec = abssec%60;
        }
        void OutTime(){
            printf("%d:%d:%d\n",hour,min,sec);
        }
};

int main(void){
    Time t1(3,20,30);
    Time t2(12345);
    t1.OutTime();
    t2.OutTime();
    return 0;
}