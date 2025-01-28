#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[n];
   
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

    }
    long long minum=arr[0];
    int index=0;
     for (int j = 1; j <= n; j++) {
      
        if(arr[j]<minum){
            minum=arr[j];
            index=j;
            
        }
      
   
    }

    cout<<minum<<" "<<index+1;
    

}