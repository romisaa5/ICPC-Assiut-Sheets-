#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    const double pi = 3.141592653;
    double R ;
    cin>>R;
    double area= pi *R*R;
    cout<<fixed << setprecision(9)<<area;
    return 0;


  
}