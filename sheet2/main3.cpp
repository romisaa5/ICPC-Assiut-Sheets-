#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    long long num[N];
    
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    
    for (int i = 0; i < N; i++) {
        if(num[i] % 2 == 0) {
            ++even;
        }
        if(num[i] % 2 != 0) {
            ++odd;
        }
        if (num[i] > 0) {
            ++positive;
        }
        if (num[i] < 0) {
            ++negative;
        }
    }
    
    cout << "Even: " << even << "\n";
    cout << "Odd: " << odd << "\n";
    cout << "Positive: " << positive << "\n";
    cout << "Negative: " << negative << "\n";
    
    return 0;
}
