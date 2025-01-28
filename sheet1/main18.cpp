#include<iostream>
using namespace std;
int main()
{
 long long days;
 cin>>days;
 long long years=days/365;
 long long x=days%365;
 long long month=x/30;
 long long y= x%30;
 cout<<years<<" years\n";
cout<<month<<" months\n";
cout<<y<<" days"; 
return 0;
}