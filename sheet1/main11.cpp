#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int minimum = min({a, b, c});
    int maximum = max({a, b, c});
    
    
    cout << minimum << " " << maximum << endl;
    
    return 0;
}
