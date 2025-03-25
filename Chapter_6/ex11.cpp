#include <stdio.h>

template <typename T, int N>
class Array
{
private:
    T arr[N];
public:
    void SetAt(int index, T value)
    {
        if(index < N && index >= 0)
            arr[index] = value;
    }
    T GetAt(int index)
    {
        return (index < N && index >= 0 ? arr[index]:0);
    }
};

int main(){
    Array<int, 5> a;
    a.SetAt(0, 1);
    a.SetAt(1, 2);
    a.SetAt(2, 3);
    a.SetAt(3, 4);
    a.SetAt(4, 5);
    printf("a[0] = %d\n", a.GetAt(0));
    printf("a[1] = %d\n", a.GetAt(1));
    printf("a[2] = %d\n", a.GetAt(2));
    printf("a[3] = %d\n", a.GetAt(3));
    printf("a[4] = %d\n", a.GetAt(4));
    return 0;
}