#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int maX = 0;
    int miN = 0;
    int t;
    cin >> t;

    while (t--)

    {
        int sum = 0;
        cin >> n >> m;
        maX = max(n, m);
        miN = min(n, m);
        for (int i = miN ; i <= maX; i++)
        {
            if (i % 2 != 0&&i!=miN&&i!=maX)
            {
                sum += i;
              
            }
           
        }
          cout << sum;

        cout << "\n";
    }
}