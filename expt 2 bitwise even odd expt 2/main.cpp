#include <iostream>
using namespace std;

void evenorodd(int n){
    if((n&1)==0){
        cout<<"even number";
    }
    else{
        cout<<"odd number";
    }
    
    
}


int main()
{
    int n;
    cout<<"enter the integer";
    cin>>n;
    
    evenorodd(n);
    return 0;
}