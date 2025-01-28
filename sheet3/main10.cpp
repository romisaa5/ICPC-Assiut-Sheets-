#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];

    }
    
  int minNumber = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minNumber) {
            minNumber = arr[i];
        }
    }

    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == minNumber) {
            count++;
        }
    }
     if (count%2!=0){
        cout<<"Lucky";
       }
       else{
        cout<<"Unlucky";
       }
}
