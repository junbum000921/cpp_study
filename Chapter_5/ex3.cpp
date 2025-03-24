#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

class Point
{
protected:
	int x, y;
	char ch;

public:
	Point(int ax, int ay, char ach) { x = ax; y = ay; ch = ach; }
	virtual void show() {
		gotoxy(x, y); putch(ch);
	}
	virtual void hide() {
		gotoxy(x, y); putch(' ');
	}
	void move(int nx, int ny) {
		hide();
		x = nx;
		y = ny;
		show();
	}
};

class Circle : public Point
{
protected:
	int radius;

public:
	Circle(int ax, int ay, char ach, int arad) : Point(ax, ay, ach) { radius = arad; }
	void show() override{
		for (double a = 0; a < 360; a += 5) {
			gotoxy(int(x + sin(a*3.141592 / 180)*radius), int(y - cos(a*3.141592 / 180)*radius/2));
			putch(ch);
		}
	}
	void hide() override{
		for (double a = 0; a < 360; a += 5) {
			gotoxy(int(x + sin(a*3.141592 / 180)*radius), int(y - cos(a*3.141592 / 180)*radius/2));
			putch(' ');
		}
	}
};

int main()
{
	Point p(1, 1, 'P');
	Circle c(30, 50, 'C', 24);

	p.show();
	c.show();

	getch();
	p.move(40, 1);
	getch();
	c.move(40, 100);
	getch();
}

