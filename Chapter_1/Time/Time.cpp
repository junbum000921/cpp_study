#include <stdio.h>
#include "Time.h"

void Time::SetTime(int h, int m, int s){
    hour = h;
    min = m;
    sec = s;
}
void Time::OutTime(){
    printf("%d:%d:%d\n",hour,min,sec);
}
