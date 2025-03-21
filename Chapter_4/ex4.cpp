#include <stdio.h>
#include <conio.h>

class Date{
    protected: int year, month, day;
    public:
        Date(int y, int m, int d){
            year = y; month = m; day = d;
        }
        void OutDate(){
            printf("%d-%d-%d\n", year, month, day);
        }
};

class Time{
    protected: int hour, minute, second;
    public:
        Time(int h, int m, int s){
            hour = h; minute = m; second = s;
        }
        void OutTime(){
            printf("%d:%d:%d\n", hour, minute, second);
        }
};

class DateTime : public Date, public Time{
    private:
        bool bEngMessage;
        int millisec;
    public:
        DateTime(int y, int m, int d, int h, int mi, int s, int ms, bool b): Date(y, m, d), Time(h, mi, s){
            bEngMessage = true;
            millisec = ms;
        }
        void OutDateTime(){
            printf("Now is ");
            OutDate();
            putch(' ');
            OutTime();
            printf("Millisecond : %d\n", millisec);
            puts(bEngMessage ? "Good Morning" : "Good Night");
        }
};
int main(){
    DateTime dt(2020, 10, 10, 10, 10, 10, 99, true);
    dt.OutDateTime();
    getch();
}
