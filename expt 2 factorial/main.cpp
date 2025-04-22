#include <bits/stdc++.h>
using namespace std;


int findDigits(int n)
{
    if (n < 0)
        return 0;

    if (n <= 1)
        return 1;

   
    double digits = 0;
    for (int i = 2; i <= n; i++)
        digits += log10(i);
    
    return floor(digits) + 1;
}

int main()
{
    cout <<"the number of digits in factorial are: "<< findDigits(1) << endl;
    cout <<"the number of digits in factorial are: "<< findDigits(3) << endl;
    cout <<"the number of digits in factorial are: "<< findDigits(5) << endl;
    cout <<"the number of digits in factorial are: "<< findDigits(120) << endl;
    return 0;
}