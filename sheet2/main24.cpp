#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
     long long n;
    
    while (t--)
    {
         long long ones=0;
        cin>>n;
        while (n>0)
        {
            if(n%2==1){
                ones+=1;
            }
            n/=2;
        }
        long long sum=0;
        for (int z = 0; z <ones; z++)
        {
            sum+=1*pow(2,z);
        }
        cout<<sum<<"\n";
        

    }
    
}