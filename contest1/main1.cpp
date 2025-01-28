#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    long long x,p;
    cin>>x>>p;
    double result= p/(1-(static_cast<double>(x)/100.0));
    cout<<fixed<<setprecision(2)<<result;
    return 0 ;
}