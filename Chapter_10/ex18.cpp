#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1="bae";
    string s2="att";
    cout<<(s1 == s1 ? "eq" : "diff")<<endl;
    cout<<(s1 == s2 ? "eq" : "diff")<<endl;
    cout<<(s1>s2?"left bigger" : "right bigger")<<endl;

    string s3="1234";
    string s4="1278";
    cout<<(s3.compare(s4)==0 ? "eq" : "diff")<<endl;
    cout<<(s3.compare(0,1,s4,0,1) == 0 ? "eq" : "diff")<<endl;
}