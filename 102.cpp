#include <bits/stdc++.h>

using namespace std;

int main()
{
    int divisor, dividend, quotient, remainder;

    cin >> dividend >> quotient >> remainder;

    divisor = (dividend - remainder) / quotient;

    cout << divisor << endl;

    return 0;
}
