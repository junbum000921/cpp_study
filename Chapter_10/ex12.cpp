#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1("hello");
    string s2("world!");

    s2 = "temp1";
    cout << s2 << endl;
    s2 = s1;
    cout << s2 << endl;

    s1+="wwww";
    cout << s1<<endl;
    s1+=s2;
    cout<<s1<<endl;
    s1+="!";
    cout<<s1<<endl;

    string s3;
    s3 = "s1 : " + s1 + " s2 :" + s2 +".";
    cout<<s3<<endl;
}