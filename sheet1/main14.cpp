#include<iostream>
#include <cctype>
using namespace std;
int main()
{
    char x;
    cin>>x;
 if (int(x)>=65&&int(x)<97)
    {
        char LLower= tolower(x);
        cout<<LLower;
    }
    else{
        char UPPER=toupper(x);
        cout<<UPPER;
    }
    
    return 0;
}