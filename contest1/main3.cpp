#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    char c;
    cin>>c;
    int ascii=int(c);
    ascii+=1;
    if (ascii==123){
        cout<<"a";

    }
    else{
        cout<<char(ascii);
    }
}