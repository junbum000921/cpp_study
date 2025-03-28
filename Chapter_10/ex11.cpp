#include <string>
#include <iostream>
using namespace std;

int main(){
    try{
        string s = "korea";
        size_t len;

        len = s.size();
        for(int i=0; i<len; i++){
            cout << s[i];
        }
        cout << endl;
        s[0] = 'c';

         for (int i =0 ; i<len+10; i++){
            cout << s.at(i);
        }
    }catch(const out_of_range& e){
        cout<<"out of range"<<endl;
    }
    cout<<endl;
}