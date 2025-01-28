#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int number;
   
    while (t--)
    {

    cin >> number;
     if (number==0)
    {
        cout<<"0";
    }

    while (number != 0) {
        int digit = number % 10; 
        cout << digit<<" ";  
        number /= 10;   

    }
cout<<"\n";
    }

    return 0;
}
