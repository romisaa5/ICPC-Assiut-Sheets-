#include <iostream>
#include <cmath>
using namespace std ;
int main () 
{
    double A,B;
    cin>>A>>B;
    double num =A/B;
    double FLOOR=floor(num);
    double CIEL =ceil(num);
    double ROUND=round(num);
    cout<<"floor "<<A<<" / "<<B<<" = "<<FLOOR<<"\n";
        cout<<"ceil "<<A<<" / "<<B<<" = "<<CIEL<<"\n";
            cout<<"round "<<A<<" / "<<B<<" = "<<ROUND<<"\n";


    return 0;
}