#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s("C++ string");

	cout << s << " size = " << s.size() << endl;
	cout << s << " length = " << s.length() << endl;
	cout << s << " allocated size = " << s.capacity() << endl;
	cout << s << " max length = " << s.max_size() << endl;

	s.resize(6);
	cout << s << " size = " << s.size() << ",capacity = " << s.capacity() << endl;

	s.reserve(100);
	cout << s << " size = " << s.size() << ",capacity = " << s.capacity() << endl;
}

