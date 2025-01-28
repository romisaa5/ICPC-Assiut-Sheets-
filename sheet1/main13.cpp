#include<iostream>
using namespace std;
int main()
{
    char X;
    cin>>X;
    if(char(X)>=48&&char(X)<65)
{

    cout <<"IS DIGIT";
}
else if(char(X)>=65)
{
    cout<<"ALPHA\n";
    if (char(X)>=65&&char(X)<97)
    {
        cout<<"IS CAPITAL";
    }
    else{
        cout<<"IS SMALL";
    }
    
}
return 0;
}