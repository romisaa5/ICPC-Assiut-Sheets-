#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int num;
    cin >> num;
    bool isPrime = true;

    if (num <= 1) {
        isPrime = false;
    } else if (num > 2 && num % 2 == 0) {
        isPrime = false;
    } else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false; 
                break;
            }
        }
    }

    if (isPrime) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
