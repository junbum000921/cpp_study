#include <iostream>
#include <memory>
#include <string>
using namespace std;

int main()
{
    unique_ptr<double> rate(new double);
	*rate = 3.1415;
	cout << *rate << endl;
	unique_ptr<string>pStr(new string("AutoPtr Test"));
	cout << *pStr << endl;
}