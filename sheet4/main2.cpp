#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main (){
    string s;
      getline(cin, s);

  size_t index=s.find("\\");
        if (index != std::string::npos){
           cout << s.substr(0, index) << endl;
        }
     
}