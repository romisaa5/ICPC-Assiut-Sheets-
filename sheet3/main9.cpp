#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while (t--)
    {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
        int min_result = INT_MAX; 

       
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int result = arr[i] + arr[j] + (j - i);
                if (result < min_result) {
                    min_result = result;
                }
            }
        }
    

        cout << min_result << endl;
    }

    return 0;

}
    
