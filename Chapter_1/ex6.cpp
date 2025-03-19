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
        explicit Time(int abssec){
            hour = abssec/3600;
            min = (abssec%3600)/60;
            sec = abssec%60;
        }
        Time(double d){
            hour=int(d)%24;
            min=int((d-int(d))*100)%60;
            sec=0;
        }
        void OutTime(){
            printf("%d:%d:%d\n",hour,min,sec);
        }
};
void printTime(Time t){
    t.OutTime();
}
int main(void){
    Time now(3.14);
    now.OutTime();
    return 0;
}