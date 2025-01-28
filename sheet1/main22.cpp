 #include <iostream>
 #include <math.h>

using namespace std;

int main() {
        long long A,b;
    char op;
    cin>>A>>op>>b;
    switch(op){
        case '>' :
        if (A>b)
        {
           cout <<"Right" ;  
        }
        else{
            cout<<"Wrong";
        }
        
        break;
         case '<':
         if (A<b)
        {
           cout <<"Right" ;  
        }
        else{
            cout<<"Wrong";
        }
        break;
        case '=':
           if (A==b)
        {
           cout <<"Right" ;  
        }
        else{
            cout<<"Wrong";
        }
        
        break;
    }
}
