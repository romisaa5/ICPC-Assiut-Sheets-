#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int N;
    cin>>N;
    int temp=N,sum=0;
    while(temp!=0){
        sum*=10;
        sum+=(temp%10);
        temp=temp/10;

    }
    if(sum==N){
        cout<<N<<"\n"<<"YES";

    }
    else{
        cout<<sum<<"\n"<<"NO";
    }

    
    
}
