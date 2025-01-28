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
    
  int minNumber = 0;
   int maxNumber = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minNumber]) {
            minNumber = i;
        }
        if (arr[i] >arr[maxNumber]) {
            maxNumber = i;
        }
        }

         swap(arr[minNumber],arr[maxNumber]);
         for (int i = 0; i < n; i++)
         {
            cout<<arr[i]<<" ";
         }
         
    }

