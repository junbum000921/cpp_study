#include <string>
#include <iostream>
#include <memory>
using namespace std;

int main()
{
	unique_ptr<string> pStr(new string("AutoPtr Test"));

	cout << *pStr << endl;
	
}

