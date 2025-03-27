#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, addr;
	cout << "Name : ";
	cin >> name;
	cout << "Your name " << name << "." << endl;
	cin.ignore();
	cout << "Address : ";
	getline(cin, addr);
	cout << "Your address is " << addr << "." << endl;
}

