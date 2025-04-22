
#include <iostream>
# include <vector> 
using namespace std;
int main(){
    int n;
    cout<<"Enter no.";
    cin>>n;
    vector<int>fib;
    fib.push_back(0);
    if(n>1){
        fib.push_back(1);
    }
    for(int i=2;i<n;i++){
        int nextfib=fib[i-1]+fib[i-2];
        fib.push_back(nextfib);
    }
    cout<<"series";
    for(int i=0;i<n;i++){
        cout<<fib[i]<<" ";
    }
    return 0;
}