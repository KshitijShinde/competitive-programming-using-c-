#include <iostream>
using namespace std;

void printnumbers(int n){
    if (n==0){
        return;
    }
    cout<<n<<" ";
    printnumbers(n-1);
    
}

int main(){
   printnumbers(10);
   return 0;
}


