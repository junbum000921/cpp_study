#include <stdio.h>
#include <string.h>

template <typename T = int>
class PosValue
{
private:
    int x, y;
    T value;
public:
    PosValue(int ax, int ay, T av) : x(ax), y(ay), value(av) { }
    T outvalue() {
        return T(value);
    }
};

int main(){
    double a = 3.3;
    PosValue<> iv(10, 10, a);
    PosValue<char> cv(25, 5, 'C');
    PosValue<double> dv(30, 15, a);
    printf("iv = %d\n", iv.outvalue());
    printf("cv = %c\n", cv.outvalue());
    printf("dv = %f\n", dv.outvalue());
    return 0;
}

