#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    
    double m, n, result;

    cout << "Enter the base (m): ";
    cin >> m;

    cout << "Enter the exponent (n): ";
    cin >> n;
    
    result = pow(m, n);

    cout << "Result of " << m << " raised to the power of " << n << " is: " << result << std::endl;

    return 0;
}
