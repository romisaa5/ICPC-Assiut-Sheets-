#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num ;
    int Frist=0,scond=1;
    if(n>=1){
        cout<<Frist<<" ";
    }
    if(n>=2){
        cout<<scond<<" ";
    }
    for (int i = 3; i <= n; i++)
    {
        num=Frist+scond;
        cout<<num<<" ",
        Frist=scond;
        scond=num;
    }
    

}