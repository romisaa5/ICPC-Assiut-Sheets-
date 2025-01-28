#include<iostream>
using namespace std;

int main() {
    int X;
    while (true) {
        cin >> X; // قراءة كلمة المرور

        if (X == 1999) {
            cout << "Correct" << endl;
            break; // إنهاء البرنامج إذا كانت الكلمة صحيحة
        } else {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}
