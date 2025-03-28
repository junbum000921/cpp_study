#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1("starcraft");
	string s2("123abc456");
	string moum("aeiou");
	string num("0123456789");

	cout << "not reverse t:" << s1.find('t') << "st" << endl;
	cout << "reverse t:" << s1.rfind('t') << "st" << endl;
	cout << "reverse cra:" << s1.rfind("cra") << "st" << endl;
	cout << "first a" << s1.find_first_of(moum) << "st" << endl;
	cout << "last a" << s1.find_last_of(moum) << "st" << endl;
	cout << "first nonnum" << s2.find_first_not_of(num) << "st" << endl;
	cout << "last nonnum" << s2.find_last_not_of(num) << "st" << endl;
}

