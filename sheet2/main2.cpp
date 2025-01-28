#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N < 2) {
        cout << -1 << endl;
    } else {
        for (int num = 2; num <= N; num += 2) {
            cout << num << "\n";
        }
    }

    return 0;
}
