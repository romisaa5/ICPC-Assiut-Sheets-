#include <bits/stdc++.h>
using namespace std;
int main()
{
    
int n,a,b;
cin>>n>>a>>b;
int sum=0;
for (int i = 1;i<=n; i++)
{
    int digitsum=0;
    int number=i;
    while (number>0)
    {
        digitsum+=number%10;
        number/=10;
    }
    if (digitsum>=a&&digitsum<=b)
    {
        sum+=i;
    }
    

}
cout<<sum;

 }