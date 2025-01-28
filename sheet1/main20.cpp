
 #include <iostream>

using namespace std;

int main() {
    int A, B, C;
    
  
    cin >> A >> B >> C;
    

    int smallest, middle, largest;
    

    if (A <= B && A <= C) {
        smallest = A;
        if (B <= C) {
            middle = B;
            largest = C;
        } else {
            middle = C;
            largest = B;
        }
    } else if (B <= A && B <= C) {
        smallest = B;
        if (A <= C) {
            middle = A;
            largest = C;
        } else {
            middle = C;
            largest = A;
        }
    } else {
        smallest = C;
        if (A <= B) {
            middle = A;
            largest = B;
        } else {
            middle = B;
            largest = A;
        }
    }

    cout << smallest << endl;
    cout << middle << endl;
    cout << largest << endl;
    
 
    cout << endl;

    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    
    return 0;
}

