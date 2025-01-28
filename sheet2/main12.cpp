#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int sum=0;
    for (int i = 1; i <=a; i++)
    {
          if (a%i==0&&b%i==0)
           {
         sum=i;
           }
        
        
        
    }
     cout<<sum;
}