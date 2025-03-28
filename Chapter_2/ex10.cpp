#include <stdio.h>

class Some
{
private:
    mutable int temp;  // mutable로 선언된 변수. const 객체에서 수정 가능

public:
    Some() { }  // 기본 생성자, 특별한 작업은 없음

    // const 멤버 함수로 선언되었지만, mutable 변수를 수정할 수 있음
    void method() const {
        temp = 0;  // mutable 변수는 const 객체에서도 수정 가능
    }
};

int main()
{
    Some s;  // 일반 객체 생성
    s.method();  // 일반 객체에서 method 호출, temp가 수정됨

    const Some t;  // 상수 객체 생성
    t.method();  // 상수 객체에서 method 호출, temp가 수정됨 (mutable 덕분에 가능)
}
