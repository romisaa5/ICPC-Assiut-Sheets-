#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
int maX=0;
int miN =0;

do
{
    int sum=0;
    cin>>n>>m;
    if(n>0&&m>0){
        maX=max(n,m);
        miN=min(n,m);
        for (int i = miN; i <=maX; i++)
        {
            sum+=i;
            cout<<i<<" ";
            
        }
    }
        else{
            break;
        }
        

    
    cout<<"sum ="<<sum;
    cout<<"\n";


} while (n>0&&m>0);

}