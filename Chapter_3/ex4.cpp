#include <stdio.h>

class Time
{
private:
	int hour, min, sec;

public:
	Time() { }
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}
	bool operator ==(const Time &other) const {
		return (hour == other.hour && min == other.min && sec == other.sec);
	}
	bool operator !=(const Time &other) const {
		return !(*this == other);
	}
	bool operator >(const Time &other) const {
		if (hour > other.hour) return true;
		if (hour < other.hour) return false;
		if (min > other.min) return true;
		if (min < other.min) return false;
		if (sec > other.sec) return true;
		return false;
	}
	bool operator >=(const Time &other) const {
		return (*this == other || *this > other);
	}
	bool operator <(const Time &other) const {
		return !(*this >= other);
	}
	bool operator <=(const Time &other) const {
		return !(*this > other);
	}
};

int main()
{
	Time t1(12, 34, 56);
	Time t2(12, 34, 21);

	if (t1 == t2) {
		puts("eq");
	} else {
		puts("diff");
	}

	if (t1 > t2) {
		puts("t1 is greater");
	} else {
		puts("t1 is not greater");
	}
}

