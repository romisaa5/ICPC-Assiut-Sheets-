#include<iostream>
using namespace std;
int main()
{
    long long A,b;
    char op;
    cin>>A>>op>>b;
    switch(op){
        case '+' :
        cout <<A+b;
        break;
         case '-':
        cout <<A-b;
        break;
        case '*':
        cout <<A*b;
        break;
        case '/':
        cout <<A/b;
        break;
        
    
    }
}
