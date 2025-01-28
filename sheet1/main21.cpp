 #include <iostream>
 #include <math.h>

using namespace std;

int main() {

    double N ;
    cin>>N;
    int integernumber =static_cast<int>(floor(N));
    double  fractionalnumber=N-integernumber;
    if (fractionalnumber==.0){
        cout<<"int "<<integernumber;
    }
    else{
        cout<<"float "<<integernumber<<" "<<fractionalnumber;
    }
    return 0;

}