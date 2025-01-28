#include<iostream>
using namespace std;
int main() {

    int N;
    cin >> N;
    int num =0;
    for (int i=1;i<=12;i++)
    {
        num++;
        cout<<N<<" * "<<num<<" = "<<N*num<<"\n";
    }
}