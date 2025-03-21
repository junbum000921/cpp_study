#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class Time{
    private:
        int hour,min,sec;
    public:
        Time(int h, int m, int s){
            SetHour(h);
            SetMin(m);
            sec=s;
        }

        int GetHour(){return hour;}
        void SetHour(int h){
            if(h>=0 && h<24) hour=h;
            else hour=h;
        }

        int GetMin(){return min;}
        void SetMin(int m){
            if(m>=0 && m<60) min=m;
            else min=m;
        }
        int GetSec(){return sec;}
        void OutTime(){
            cout << "Time: " << hour << ":" << min << ":" << sec << endl;
        }
};

int main(void){
    Time now(12, 34, 56);
    now.OutTime();
    now.SetHour(9);
    now.OutTime();
    now.SetHour(40);
    now.OutTime();
    return 0;
}