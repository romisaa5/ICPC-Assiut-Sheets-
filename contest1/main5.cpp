#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
 
    
    // يجب أن يكون هناك على الأقل عدد من الأرقام يكفي ليشمل العدد المطلوب من الفردية والزوجية
    if ((a-b==1||b-a==1||b-a==0||a-b==0) && (a > 0 && b > 0 ||(a==b&&a!=0) ||(a == 0 && b > 0) || (b == 0 && a > 0))) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
