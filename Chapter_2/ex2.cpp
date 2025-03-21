#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm> // std::min, std::max 사용을 위해 추가
#include <windows.h>

// Custom implementation of gotoxy function
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

class Car {
    private:
        int gear;
        int angle;
        int rpm;
    public:
        Car() {
            gear = 0;
            angle = 0;
            rpm = 0;
        }
        void ChangeGear(int g) {
            if (g >= 0 && g <= 6) gear = g;
        }
        void RotateWheel(int a) {
            if (a >= -45 && a <= 45) angle = a;
        }
        void Accel() {
            rpm = std::min(rpm + 100, 7000);
        }
        void Break() {
            rpm = std::max(rpm - 500, 0);
        }
        void Run() {
            int Speed;
            char Mes[128];
            gotoxy(10, 13);
            if (gear == 0) {
                puts("Please change gear.");
                return;
            }
            if (gear == 6)
                Speed = rpm / 100;
            else
                Speed = gear * rpm / 100;
            
            sprintf(Mes, "%dkm/h %s %s %d", Speed, (Speed > 0) ? "Forward" : "Backward", (angle > 0) ? "Left" : "Right", rpm);
            puts(Mes);
        }
};

int main() {
    Car mycar;
    char key;
    while (1) {
        std::cin >> key; // 표준 입력으로 키를 받음
        switch (key) {
            case '1': mycar.ChangeGear(1); break;
            case '2': mycar.ChangeGear(2); break;
            case '3': mycar.ChangeGear(3); break;
            case '4': mycar.ChangeGear(4); break;
            case '5': mycar.ChangeGear(5); break;
            case '6': mycar.ChangeGear(6); break;
            case 'a': mycar.Accel(); break;
            case 'b': mycar.Break(); break;
            case 'q': exit(0);
        }
        mycar.Run();
    }
    return 0;
}