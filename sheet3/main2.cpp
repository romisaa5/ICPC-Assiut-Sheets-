#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[n];
   
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    auto it = find(arr, arr + n, x);

    if (it != arr + n) {
       
        cout<< it - arr << endl;
    } else {
        
        cout <<"-1" << endl;
    }

    return 0;
}
