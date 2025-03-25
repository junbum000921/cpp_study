#include <stdio.h>

class Int100
{
private:
    int num;

public:
    Int100(int a) : num(a)  // 여기서는 단순히 초기화만 수행
    {
        if (a > 100) {
            throw a; // 예외 발생
        }
    }

    void OutValue() {
        printf("%d\n", num);
    }
};

int main()
{
    try {
        Int100 i(101);  // 101이므로 예외 발생
        i.OutValue();   // 실행되지 않음 (예외가 발생했으므로)
    }
    catch (int a) {  // 예외 처리
        printf("%d은 100보다 더 큽니다.\n", a);
        puts("무효한 객체임");
    }

    return 0;
}
