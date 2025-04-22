#include <iostream>
using namespace std;

int power(int m,int n){
     if (n == 0) {
        return 1;  
    }
    return m * power(m, n - 1);
}


int main()
{
   int res=power(2,3);
    std::cout << res << std::endl;
    return 0;
}