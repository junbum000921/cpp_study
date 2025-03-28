#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1 = "dokdo is japan";
    cout<<s1<<endl;
    s1.replace(9,5,"korea");
    cout<<s1<<endl;
}