 #include <iostream>
 #include <math.h>

using namespace std;

int main() {
        long long A,B,C;
    char S,Q;

    cin>>A>>S>>B>>Q>>C;
    switch(S){
        case '+' :
        if (A+B==C)
        {
           cout <<"Yes" ;  
        }
        else{
            cout<<A+B;
        }
        
        break;
         case '-':
          if (A-B==C)
        {
           cout <<"Yes" ;  
        }
        else{
            cout<<A-B;
        }
     
        break;
        case '*':
      if (A*B==C)
        {
           cout <<"Yes" ;  
        }
        else{
            cout<<A*B;
        }
        
        break;
    }
}
