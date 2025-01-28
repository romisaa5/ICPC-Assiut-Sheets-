#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    long long num[N];
    
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    int maxamium=0;
    for (int i = 0; i <N ; i++)
    {
     if (num[i]> maxamium){
        maxamium=num[i];
     }
    }
    cout<<maxamium;
}