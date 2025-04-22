#include <iostream>
using namespace std;

int sumdigit(int n){
    if(n==0){
        return 0;
    }
    return(n%10+sumdigit(n/10));
}

int main(){
    int sumd=sumdigit(521);
    std::cout << sumd << std::endl;
    
}

