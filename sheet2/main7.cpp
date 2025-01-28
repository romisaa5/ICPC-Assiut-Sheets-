#include<iostream>
using namespace std;

int main() {
  
 int N;
 cin >> N;
    
long long num[N];
    
    for (int i = 0; i < N; i++) {
        cin >> num[i];
        long long factorial =1;
        for(int j=2;j<=num[i];j++){
            factorial*=j;
          

        }
         cout<<factorial<<"\n";
    }

  
    return 0;
}
