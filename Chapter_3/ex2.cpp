#include <stdio.h>

class Time{
    private: int hour, minute, second;
    public: 
        Time(){}
        Time(int h, int m, int s): hour(h), minute(m), second(s){}
        void OutTime() const { printf("%d:%d:%d\n", hour, minute, second); }
        const Time operator +(int s){
            Time t = *this;
            t.second = t.second + s;
            t.minute += t.second / 60;
            t.second %= 60;
            t.hour += t.minute / 60;
            t.minute %= 60;
            return t;
        }
        
};


int main(){
    Time t1(1, 2, 3), t2(4, 5, 6), t3;
    t3 = t1+1;
    t1.OutTime();
    t2.OutTime();
    t3.OutTime();
}