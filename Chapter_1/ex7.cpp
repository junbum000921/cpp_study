#include <stdio.h>

class Fahrenheit;
class Celsius{
public:
    double Tem;
    Celsius(){}
    Celsius(double aTem) : Tem(aTem){}
    operator Fahrenheit();
    void OutTem(){
        printf("Celsius = %f\n",Tem);
    }
};
class Fahrenheit{
public:
    double Tem;
    Fahrenheit(){}
    Fahrenheit(double aTem) : Tem(aTem){}
    operator Celsius();
    void OutTem(){
        printf("Fahrenheit = %f\n",Tem);
    }
};
Celsius::operator Fahrenheit(){
    return Fahrenheit((Tem*9.0/5.0)+32);
}
Fahrenheit::operator Celsius(){
    return Celsius((Tem-32)*5.0/9.0);
}
int main(void){
    Celsius c(30);
    Fahrenheit f=c;
    f.OutTem();
    Celsius c2=f;
    c2.OutTem();
    return 0;
}
